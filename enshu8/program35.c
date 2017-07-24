#include<stdio.h>

#define dKeySize 12

int main(void)
{
    char Key[dKeySize];
    int index;

    printf("key data?");
    scanf("%s" Key);

    index = Hash(Key) % 7;

    printf("%sのハッシュ値は%d\n", Key, index);

    return 0;
}
