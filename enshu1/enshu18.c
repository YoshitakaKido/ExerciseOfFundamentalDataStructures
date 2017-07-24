#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int n, m;

    printf("1以上の整数を1つ入力して下さい>>>");
    scanf("%d", &n);

    m = n;
        
    while(n > 0)
    {
        while(m > 0)
        {
            printf("%d", n-(m-1));
            m--;
        }
        printf("\n");
        n--;
        m = n;
    }

    return 0;
}
