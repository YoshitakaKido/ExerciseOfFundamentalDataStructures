#include<stdio.h>


int main(void)
{
    int num;
    double sum = 0;

    printf("人数を入力してください>>>");
    scanf("%d", &num);


    double height[num];
    int i;

    for(i = 0; i != num; i++)
    {
        printf("身長を入力してください>>>");
        scanf("%lf", &height[i]);
        sum += height[i];
    }
    
    printf("身長の平均は、%lf[cm]です\n", (double)sum/ num);

    return 0;
}
