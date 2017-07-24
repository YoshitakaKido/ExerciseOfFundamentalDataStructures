#include<stdio.h>


double main(void)
{   
    int i, j, min, temporary;
    double data[10];

    printf("データを10個入力して下さい>>>");
    for(i = 0; i < 10; i++)
    {
        scanf("%lf", &data[i]);
    }
       
    printf("ソート結果です\n");
    for (i = 0; i < 9; i++)
    {
        min = i;
        
        for (j = i + 1; j < 10; j++)
        {
            if (data[j] < data[min])
            {
                min = j;
             }
         }

         temporary = data[i];
         data[i] = data[min];
         data[min] = temporary;                

      }
    for(i = 0; i < 10; i++)
    {   
        printf("%lf ", data[i]);
    }
    printf("\n");

    return 0;
}
