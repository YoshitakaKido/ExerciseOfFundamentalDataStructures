#include<stdio.h>


int fib(int m)
{
    if (m == 0) return 0;
    else if (m == 1) return 1;
    else
        return fib(m-1) + fib(m-2);
    
}

int main(void)
{
    int n = 0;

    printf("0以上の整数を入力してください：");
    scanf("%d", &n);

    printf("fib(%d) = %d\n", n, fib(n));
}
