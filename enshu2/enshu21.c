#include<stdio.h>

double sum(double a, double b);

double main(void)
{
    double a, b;

    printf("double型の値を2つ入力して下さい>>>");
    scanf("%lf %lf", &a, &b);

    printf("2つの値の和は; %lf です\n", sum(a, b));

    return 0;
}

double sum(double a, double b)
{
   return a + b;
}
