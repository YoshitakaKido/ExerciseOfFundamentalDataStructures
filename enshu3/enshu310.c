#include<stdio.h>

int factorial(int m)
{
    if (m <= 1) return 1;
    else return m * factorial(m-1);
}

int main(void)
{
    int n;

    printf("0以上の整数を入力してください：");
    scanf("%d", &n);

    printf("%dの階乗： %d\n", n, factorial(n));
    
    return 0;
}
