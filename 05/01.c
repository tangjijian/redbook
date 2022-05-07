#define ADJUST 7.31
#include <stdio.h>
#include <math.h>

void practice_1(void);
void practice_2(int n);
void practice_3(); // 不加参数的为函数声明，加参数为函数原型

int main()
{

    char c = '!';
    float f = 12.3f;

    practice_2(c);
    practice_3(f);

    getchar();
    return 0;
}

void practice_1(void)
{

    double shoe, foot;
    const double SCALE = 0.333;

    printf("Shoe size (men's) foot length.\n");
    shoe = 3.0;
    while (shoe < 18.5)
    {
        foot = shoe * SCALE + ADJUST;
        printf("%10.1f %15.2f inches\n", shoe, foot);
        shoe += 1.0;
    }
}
void practice_2(int n)
{
    while (n-- > 0)
    {
        /* code */
        printf("#");
    }
    printf("\n");
}
void practice_3(int n)
{
    while (n-- > 0)
    {
        /* code */
        printf("#");
    }
}