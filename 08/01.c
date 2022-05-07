#include <stdint.h>
#include <stdio.h>
#include <process.h>

void practice_1(void);
void practice_2(void);
void practice_3(void);
void practice_4(void);
void display(char ch, int cols, int rows);
char getFirst(void);
char get_choice(void);

int main(void)
{

    // practice_3();
    // get_choice();
    practice_4();
    system("pause");
    return 0;
}
void practice_1()
{

    char ch;

    while ((ch = getchar()) != '#')
    {
        putchar(ch);
    }
}
void practice_2(void)
{

    int ch;

    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }
}
void practice_3(void)
{

    int ch;

    int rows, cols;

    printf("Enter a charactor and two integer: ");
    while ((ch = getchar()) != '\n')
    {

        if (scanf("%d%d", &cols, &rows) != 2)
        {
            printf("Invalid input.\n");
            break;
        }
        display(ch, cols, rows);

        while (getchar() != '\n') // 跳过剩余的输入
            ;
    }
}
void display(char ch, int cols, int rows)
{

    int i, j;

    for (i = 0; i < rows; i++)
    {

        for (j = 0; j < cols; j++)
        {

            putchar(ch);
        }
        putchar('\n');
    }
}
void practice_4(void)
{
    char ch;
    printf("Please enter a choice\n");
    printf("a.animal                              b.book\n");
    printf("c.car                                 d.dog\n");

    while ((ch = get_choice()) != 'q')
    {
        switch (ch)
        {
        case 'a':
            printf("animal\n");
            break;
        case 'b':
            printf("book\n");
            break;
        case 'c':
            printf("car\n");
            break;
        case 'd':
            printf("dog\n");
            break;
        default:
            printf("Invalid choice\n");
            break;
        }
    }
}
char get_choice(void)
{

    char ch;

    ch = getFirst();

    while ((ch < 'a' || ch > 'd') && ch != 'q')
    {
        printf("Invalid choice.\n");
        ch = getFirst();
    }
}
char getFirst(void)
{
    char ch = getchar();

    while (getchar() != '\n')
        ;
    return ch;
}