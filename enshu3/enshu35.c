#include<stdio.h>

void max(int m[]);

void min(int *n);


int main(void)
{
    
    int i, *p;
    int ary[6];

    for(i = 0; i < 6; i++)
    {
        printf("? ");
        scanf("%d", &ary[i]);
    }

    max(ary);

    p = &ary[0];
    min(p);

    return 0;
}

void max(int m[])
{
    int max = m[0], j;

    for (j = 0; j < 6; j++)
    {
        if (max < m[j+1])
            max = m[j+1];
    }

    printf("最大値 ==> %d\n", max);
}


void min(int *n)
{

    int min = *n, k;

    for (k = 0; k < 6; k++)
    {
        if (min > *(n+k))
            min = *(n+k);
    }

    printf("最小値 ==> %d\n", min);
}
