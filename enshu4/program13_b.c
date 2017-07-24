#include<stdio.h>

int gcd(int a, int b)
{
    if(b != 0)
    {
        gcd(b, a % b);
    }
    else
        return a;
}

main()
{
    int a, b, t, count = 0;

    scanf("%d %d", &a, &b);

    if(a < b){
        t = a;
        a = b;
        b = t;    
    }

    printf("GCD = %d\n", gcd(a, b));

    return 0;
}
