#define printf __mingw_printf
#include <stdio.h>
#include <limits.h>
#include "stdint.h"
#include "inttypes.h"

void p_smile(void);
void p_platinum(void);
void p_format_num(void);
void p_bureau(void);
void p_inttype(void);
void p_float(void);
int practice_1(void);

int main()
{
    // int dogs;
    // dogs = 10;

    // printf("%p\n", &dogs);
    // printf("hello world\n");
    // printf("There wrer %d words and %d liens", 3020, 350);
    for (int i = 3; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            p_smile();
        }
        printf("\n");
    }
    // p_platinum();
    // getchar();
    // p_format_num();
    // p_datatype();
    // p_bureau();
    // p_inttype();
    // p_float();
    while (1)
    {
        /* code */
        int num = practice_1();
        if (num == 0)
        {
            break;
        }
    }

    getchar();
    getchar();
    return 0;
}
void p_smile(void)
{
    printf("Smile!");
}
void p_platinum(void)
{
    float weigth;
    float value;

    printf("Are you worth your weigth in paltinum?\n");
    printf("Let's check it!\n");
    printf("Please enter your weigth in pounds.\n");

    scanf("%f", &weigth);
    value = 1700.0 * weigth * 14.5833;

    printf("Your weight in platinum is worth $%.2f", value);
}
void p_format_num(void)
{
    printf("10=%d 8=%o 16=%x\n", 10, 10, 10);
    printf("10=%#d 8=%#o 16=%#x", 10, 10, 10);
}
void p_datatype(void)
{
    printf("Max short int is %hd\n", SHRT_MAX);
    printf("Max short int size is %zd\n", sizeof(SHRT_MAX)); // c99 sizeof 返回的类型是size_t 可以使用%zd 格式化
    printf("Max int is %d\n", INT_MAX);
    printf("Max int size is %d\n", sizeof(INT_MAX));
    printf("Max long int is %d\n", LONG_MAX);
    printf("Max long int size is %d\n", sizeof(LONG_MAX));
    printf("Max long long int is %lld\n", LLONG_MAX);
    printf("Max long long int size is %d\n", sizeof(LLONG_MAX));
}
void p_bureau(void)
{
    int a = '\xff'; // 字符char 大小不能超过 1 byte有个编译器默认char是有符号的有的是无符号
    char *s = "??????????";
    printf("%s%u", s, a);
}
void p_inttype(void)
{

    int32_t s = 100;
    printf("int32_t %d\n", sizeof(s));
    printf("int32_t %" PRId32, s);
}
void p_float(void)
{
    float aboat = 3.14e10;

    long double dip = 5.32e-5;
    printf("Aboat can be printed for %f or %e\n", aboat, aboat);
    printf("Dip can be printed as %Lf or %Le\n", dip, dip); // mingw32 window运行的代码跑在msvc上msvc是32位的没有long double 类型mingw??????
    printf("long double sizeof is %d\n", sizeof(long double));
}
int practice_1(void)
{
    int input;

    printf("Please enter a ascii code:");
    scanf("%d", &input);

    printf("The character you entered is %c", input);
    return input;
}