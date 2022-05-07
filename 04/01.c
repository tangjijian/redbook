#define DENSITY 62.4
#define PRAISE "You are extraordinary being"
#define printf __mingw_printf
#include <stdio.h>
#include <string.h>
#include <float.h>
#include <limits.h>

void p_1(void);
void p_2(void);
void p_3(void);
void p_4(void);
void p_5(void);
void p_6(void);
void p_7(void);
void p_8(void);
void p_9(void);

int main(void)
{
    p_9();

    getchar();
    getchar();
    return 0;
}

void p_1(void)
{
    float weight, volume;
    char name[40];
    int size, letters;

    printf("Hi what's your first name?\n");
    scanf("%s", name);

    printf("%s, what's your weigth in pounds?\n", name);
    scanf("%f", &weight);
    size = sizeof name;

    letters = strlen(name);
    volume = weight / DENSITY;
    printf("Well,%s,your volume is %2.2f cubic feet.\n", name, volume);
    printf("Also,your first name has %d letters\n", letters);
    printf("and we have %d bytes to store it.", size);

    getchar();
    getchar();
}
void p_2()
{
    char name[40];

    printf("What's your name?");
    scanf("%s", name);
    printf("Hello %s %s", name, PRAISE);
}
void p_3(void)
{

    char name[40];

    printf("Enter your name:");
    scanf("%s", name);
    printf("strlen's result=%d. sizeof's result=%d", strlen(name), sizeof(name));
}
void p_4(void)
{
    printf("long double max is:%e\n", DBL_MAX);
    printf("char bits is %d\n", CHAR_BIT);
    printf("long long int max is:%lld", LLONG_MAX);
}
void p_5(void)
{
    int a = 10;
    int b = 20;

    printf("%td", &a - &b);
}
void p_6(void)
{

    printf("*%hd*\n", 40000 % 65536);
    printf("*%hu*", 40000 % 65536);
}
void p_7(void)
{
    int d1;
    int d2;

    scanf("%d  %d", &d1, &d2);
    printf("d1=%d,d2=%d", d1, d2);
}
void p_8(void)
{
    char name;
    char name1;
    scanf("%c", &name);
    scanf(" %c", &name1);

    printf("once=%c\n", name);
    printf("second=%c", name1);
}
void p_9(void)
{

    int width, precision;

    int number = 256;
    float weigth = 256.005;

    printf("Enter a width:");
    scanf("%d", &width);
    printf("The number's width is set to be %*d", width, number); // * 相当于占位符 scanf() %*d 会跳过这个输入
}