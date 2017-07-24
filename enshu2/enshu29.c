#include<stdio.h>


int main(void)
{
    char name0[4][9] = {"Taro", "Masatake", "Kouichi", "Yutaka"};

    char name1[3][7] = {"Kaori", "Mariko", "Mari"};

    int i;

    for(i = 0; i < 4; i++){
        printf("name0[%1d]:%-8s\n", i, name0[i]);
    }

    for(i = 0; i < 3; i++){
        printf("name1[%1d]:%10s\n", i, name1[i]);
    }
    
    return 0;
}
