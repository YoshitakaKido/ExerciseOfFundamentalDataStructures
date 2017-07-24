#include<stdio.h>

int main(void){

    int a[5] = {21, 22, 23, 24, 25};
    int *a_p, i;

    a_p = &a[0];

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *a_p);
        a_p += 1;
    }

    return 0;
}
