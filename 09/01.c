#include <stdio.h>
#include <string.h>
#include <process.h>
#define SPACE ' '
#define NAME "ABC"
#define ADDRESS "Beijing"
#define WIDTH 20
void show_n_char(char ch, int n);
int main(void)
{
    int space;
    show_n_char('*', WIDTH);
    putchar('\n');
    space = (WIDTH - strlen(NAME)) / 2;
    show_n_char(SPACE, space);
    printf("%s\n", NAME);
    show_n_char(SPACE, (WIDTH - strlen(ADDRESS)) / 2);

    printf("%s\n", ADDRESS);
    show_n_char('*', WIDTH);
    putchar('\n');
    system("pause");
    return 0;
}

void show_n_char(ch, n) char ch; // 标准C之前的形式
int n;
{
    int i;

    for (i = 0; i < n; i++)
    {
        putchar(ch);
    }
}