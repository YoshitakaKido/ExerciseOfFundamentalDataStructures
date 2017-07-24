#include<stdio.h>
#include<stdlib.h>

int factorial(int a)
{
    int fact = 1;

    while(a > 0)
    {
        fact *= a;
        a--;
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
