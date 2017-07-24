#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(void)
{
    char k[0];

    printf("アルファベットを１文字入力して下さい>>>");
    scanf("%c", &k[0]);

    if(k[0] != tolower(k[0]))
        printf("文字は%c\n", tolower(k[0]));
    else
        printf("文字は%c\n", toupper(k[0]));

    return EXIT_SUCCESS;
}
