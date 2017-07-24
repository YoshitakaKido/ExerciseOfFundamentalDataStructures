#include<stdio.h>

int main(void){

    int a[1] = {21};
    int *a_p;

    a_p = &a[0];

    printf("%d\n", *a_p);
    printf("%d\n", *(a_p+1));
    printf("%d\n", *(a_p+2));
    printf("%d\n", *(a_p+3));
    printf("%d\n", *(a_p+4));

    return 0;
}
