#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n, m;

    printf("1以上の整数を1つ入力して下さい>>>");
    scanf("%d", &n);

    m = n;
        
    while(m > 0)
    {
        while(n > 0)
        {
            printf("%d", n);
            n--;
        }
        printf("\n");
        m--;
        n = m;
    }

    return 0;
}
