#include <stdio.h>
#include <process.h>
#include <math.h>
#include <stdbool.h>

void practice_1(void);
void practice_2(void);
void practice_3(void);
void practice_4(void);
void practice_5(void);
void practice_6(void);
void practice_7(void);
void practice_8(void);

int main(void)
{

    practice_8();

    system("pause");

    return 0;
}

void practice_1(void)
{

    long num, sumer;
    num = 0L;
    int status;
    printf("Please enter a number (a to quit)\n");
    status = scanf("%ld", &num);

    while (status == 1)
    {
        /* code */
        sumer += num;
        printf("Please enter a number (a to quit)\n");
        status = scanf("%ld", &num);
    }
    printf("Those numbers sum=%ld\n", sumer);
}

void practice_2(void)
{

    const float PI = 3.14159;
    printf("%f\n", fabs(PI - 3.1416));
    printf("%d\n", fabs(PI - 3.1416) > 0.000001);
    printf("%d\n", 3 * 1.0 / 3);
    printf("%d\n", 3 * (1.0 / 3));
    printf("%f\n", 3 * (1.0 / 3));
    printf("%d\n", (3 * 1.0) / 3);
    printf("%.2f\n", 1.0 / 3);
}
void practice_3(void)
{

    long sumer;
    sumer = 0L;
    long num;
    printf("Please enter a number to sum (q to quit)\n");
    // _Bool status = (scanf("%ld", &num)) == 1;

    // while (status)
    // {
    //     /* code */
    //     sumer += num;
    //     status = (scanf("%ld", &num)) == 1;
    // }
    bool status = (scanf("%ld", &num)) == 1; // 引入的stdbool.h 中 bool作为_Bool的别名

    while (true == status)
    {
        /* code */
        sumer += num;
        status = (scanf("%ld", &num)) == 1;
    }
    printf("Those numbers sum to %ld\n", sumer);
}
void practice_4(void)
{
    int num = 0;
    for (printf("Keep entering numbers!\n"); num != 6;)
    {
        scanf("%d", &num);
        printf("%d\n", num);
    }
}
void practice_5(void)
{
    int a;
    int house;
    a = (house = 249, 1000, 500); // 整个逗号表达式的值是最右侧的值a=500;
    printf("%d\n", a);
    printf("%d", house);
}

void practice_6(void)
{

    int i = 0;
    {
        for (i = 0; i < 10; i++)
        {
            /* code */
            printf("%d\n", i);
        }
    }
    printf("%d\n", i);
}
void practice_7(void)
{

    char ch;
    scanf("%c", &ch);
    while (ch != 'g')
    {
        /* code */
        printf("%c\n", ch);
        scanf("%c", &ch);
    }
}
void practice_8(void)
{
    char ch[30];
    scanf("%s", ch); //只能读取单词，不能读取带空格的字符串
    printf("%s\n", ch);
}
