#include<stdio.h>

main()
{
    int a, b, t, count = 0;

    scanf("%d %d", &a, &b);

    if(a < b){
        t = a;
        a = b;
        b = t;    
    }

    while(b != 0){
        t  = a % b;
        a = b;
        b = t;
        count += 1;

        printf("%d回目　a = %d b = %d\n", count, a, b);
    }
    printf("GCD = %d\n", a);

    return 0;
}
