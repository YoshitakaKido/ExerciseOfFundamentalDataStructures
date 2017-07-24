#include<stdio.h>

double diff(double a, double b);

double main(void)
{
    double a, b;

    printf("double型の値を2つ入力して下さい>>>");
    scanf("%lf %lf", &a, &b);

    printf("2つの値の差は; %lf です\n", diff(a, b));

    return 0;
}

double diff(double a, double b)
{
   return a - b;
}
