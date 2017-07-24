#include<stdio.h>
#include<stdlib.h>

int min(int l, int m, int n)
{
    int min = l;
    
    if(m < min)
        min = m;
    if(n < min)
        min = n;

    return min;
}

int main(void)
{
    int a, b, c;

    printf("3つの整数を入力して下さい：");
    scanf("%d %d %d", &a, &b, &c);

    printf("最小値は：%d\n", min(a, b, c));

    return EXIT_SUCCESS;
}
