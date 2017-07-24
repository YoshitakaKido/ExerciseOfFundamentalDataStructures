#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int m, n, r;
    
    printf("整数を2つ入力して下さい>>>");
    scanf("%d %d", &m,&n);

    r = m % n;
    
    while(r != 0)
    {
        m = n;
        n = r;
        r = m % n;
    }

    printf("GCDは%dです。\n", n);

    return 0;
}
