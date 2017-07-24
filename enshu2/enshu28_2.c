#include<stdio.h>


double main(void)
{   
    int i, j, ch;
    double data[10];

    printf("データを10個入力して下さい>>>");
    for(i = 0; i < 10; i++)
    {
        scanf("%lf", &data[i]);
    }
       
    printf("ソート結果です\n");
    for (i = 0; i < 10; ++i)
    {
        for (j = i + 1; j < 10; ++j)
        {
            if (data[i] > data[j])
            {
                ch =  data[i];
                data[i] = data[j];
                data[j] = ch;
             }
         }
      }
    for(i = 0; i < 10; i++)
    {   
        printf("%lf ", data[i]);
    }
    printf("\n");

    return 0;
}
