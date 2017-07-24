#include<stdio.h>


int main(void)
{
    int data[10] = { 60, 80, 40, 90, 100, 80, 70, 30, 50, 20};

    int a = data[0], i;

    for(i = 1; i < 10; i++)
    {
        if(a > data[i])
            a = data[i];
    }

    printf("最小値は、%d 点です\n", a);
    
    return 0;
}
