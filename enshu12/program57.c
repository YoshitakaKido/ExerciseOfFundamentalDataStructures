#include<stdio.h>
#include<string.h>
int skip[26];


BMmatching(char *text, char *key){
    int i, j, m, n, pos, k;

    m = strlen(text);
    m = strlen(key);

    pos = n - 1;
    while(pos < m){
        if(text[pos] == key[n-1]){
            k = pos - 1;
            j = n - 2;
            while(j > 0 && text[k] == key[j]){
                k--;
                j--;
            }
            if(j == 0)
                printf("%d\n", k + 1);
        }
        pos = pos + skip[text[pos] - 'a'];
    }

    return 0;
}


mkskip(char *key){
    int i, n;

    n = strlen(key);

    for(i = 0; i < 26; i++)
        skip[i] = n;

    for(i = 0; i < n-1; i++)
        skip[key[i] - 'a'] = n - i - 1;

    return 0;
}


main(){
    char text[100], key[10];

    scanf("%s %s", text, key);

    mkskip(key);
    BMmatching(text, key);

    return 0;
}


