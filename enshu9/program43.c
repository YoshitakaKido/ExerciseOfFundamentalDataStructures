#include<stdio.h>
#include<stdlib.h>
void select_sort(int x[], int n);
void select_sort_process(int x[], int n, int i);
void bubble_sort(int x[], int n);
void bubble_sort_process(int x[], int n);

/* Program4.2 */
main(int argc, char *argv[])
{
    int i, x[100], n;

    n = atoi(argv[1]);
    for(i = 0; i < n; i++)  scanf("%d", &x[i]);

    bubble_sort(x, n);

    /* printf("select_sort\n"); */

    /* select_sort(x, n); */

    printf("sort\n");
    for(i = 0; i < n; i++)
        printf("%d\n", x[i]);

    return 0;
}

/* Program4.1 */
void select_sort(int x[], int n)
{
    int i, j, tmp, low_index, low_data;

    for(i = 0; i < n-1; i++)
    {
        low_data = x[i];
        low_index = i;

        for(j = i+1; j < n; j++)
        {
            if(low_data > x[j])
            {
                low_data = x[j];
                low_index = j;
            }
        }
        tmp = x[i];
        x[i] = x[low_index];
        x[low_index] = tmp;

        select_sort_process(x, n, i);        
    }
}


void select_sort_process(int x[], int n, int i)
{
    int k;
    printf("i = %d; \n", i);

    for(k = 0; k < n; k++)
        printf("%d ", x[k]);

    printf("\n");
}

/* Program4.3 */
void bubble_sort(int x[], int n)
{
    int i, j, tmp;

    for(i = 0; i < n-1; i++)
    {
        printf("i = %d;\n", i);

        for(j = n-1; j > i; j--)
        {
            if(x[j] < x[j-1])
            {
                tmp = x[j];
                x[j] = x[j-1];
                x[j-1] = tmp;
            }
            printf("j = %d;", j);
            bubble_sort_process(x, n);
        }
    }
}


void bubble_sort_process(int x[], int n)
{
    int k;
    for(k = 0; k < n; k++)
        printf("%d", x[k]);

    printf("\n");
}
