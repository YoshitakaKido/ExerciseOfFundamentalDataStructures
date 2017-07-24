#include<stdio.h>
#include<stdlib.h>

main(int argc, char *argv[])
{
    int a[100], min, n, i;

    n = atoi(argv[1]);
    for(i = 0; i < n; i++) scanf("%d", &a[i]);

    min = a[0];
    for(i = 1; i < n; i++){
        if(min > a[i]) min= a[i];
    }

    printf("MIN = %d\n", min);

    return 0;
}
