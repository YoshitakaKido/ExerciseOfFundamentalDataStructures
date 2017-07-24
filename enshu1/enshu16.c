#include<stdio.h>
#include<stdlib.h>

int factorial(int a)
{
    int fact = 1;

    for(a; a > 0;a--)
    {
        fact *= a;
    }

    return fact;
}

int main(void)
{
    int n;

    printf("0以上の整数nを入力して下さい>>>");
    scanf("%d", &n);

    printf("%dの階乗は%dです。\n", n, factorial(n));

    return EXIT_SUCCESS;
}
