#include <stdio.h>
#define SPACE ' '
#include <process.h>
#include <ctype.h>
#include <stdBool.h>
#define STOP '|'

void practice_1(void);
void practice_2(void);
void practice_3(void);
void practice_4(void);
void practice_5(void);
void practice_6(void);
void practice_7(void);
void practice_8(void);
void practice_9(void);

int main()
{
    practice_9();

    system("pause");
    return 0;
}

void practice_1(void)
{
    char ch;
    ch = getchar();
    while (ch != '\n')
    {
        /* code */

        if (ch == SPACE)
        {
            putchar(ch);
        }
        else
        {
            ch++;
            putchar(ch);
        }
        ch = getchar();
    }
    putchar(ch);
}
void practice_2(void)
{

    char ch;

    while ((ch = getchar()) != '\n')
    {
        /* code */
        if (isalpha(ch)) // ctype.h 声明的函数原型判断是不是字母
        {
            putchar(ch + 1);
        }
        else
        {
            putchar(ch);
        }
    }
    putchar(ch);
}
void practice_3(void)
{

    char ch;
    ch = getchar();
    if (isalpha(ch) && islower(ch))
    {
        putchar(toupper(ch));
    }
    else
    {
        putchar(ch);
    }
    ch = getchar(); // 获取回车键'\n'
    putchar(ch);
}
void practice_4(void)
{

    bool isPrime;
    unsigned long num;
    unsigned long div;
    printf("请输入一个整数：");

    while ((scanf("%lu", &num)) == 1)
    {
        for (div = 2, isPrime = true; (div * div) <= num; div++)
        {
            if (num % div == 0)
            {
                if ((div * div) != num)
                {
                    printf("%lu is divisible by %lu and %lu\n", num, div, num / div);
                }
                else
                {
                    printf("%lu is divisible by %lu\n", num, div);
                }
                isPrime = false;
            }
        }
        if (isPrime)
        {
            printf("%lu is a prime number\n", num);
            printf("Please enter another integer for analysis:\n");
            printf("Or enter 0 to exit:\n");
        }
    }
    printf("Bye!\n");
}
void practice_5(void) // 统计单词
{
    char pre;
    char ch;
    long charCount = 0;
    long wordCount = 0;
    long lineCount = 0;
    int inWord = false;
    int partialLine;
    while ((ch = getchar()) != STOP)
    {
        if (!isspace(ch) && !inWord)
        {
            inWord = true;
            wordCount++;
        }
        if (isspace(ch) && inWord)
        {
            inWord = false;
            pre = ch;
        }

        if (ch == '\n')
        {
            lineCount++;
        }
        if (pre != '\n')
        {
            partialLine = 1;
        }
    }
    printf("%ld words, %ld lines, %ld characters.\n", wordCount, lineCount, charCount);
    printf("%d partial line.\n", partialLine);
}
void practice_6(void)
{

    int cans;
    int sq_feet;
    const int COVERAGE = 350;
    printf("Enter the number of cans of paint you want to cover:\n");
    while ((scanf("%d", &sq_feet)) == 1)
    {

        cans = sq_feet / COVERAGE;
        cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;
        printf("You need %d %s of painted.\n", cans, cans == 1 ? "can" : "cans");
    }
}
void practice_7(void)
{

    char ch;
    while ((ch = getchar()) != '\n')
        if (ch != '\t')
            putchar(ch);
}
void practice_8(void)
{

    char ch[20];
    sprintf(ch, "%s", "def");
}
void practice_9(void)
{

    char ch;
    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
        {
            continue;
        }
        if (islower(ch))
        {
            switch (ch)
            {
            case 'a':
                putchar('A');
                break;
            case 'b':
                putchar('B');
                break;
            }
        }
        while (getchar() != '\n')
            ;
    }
}