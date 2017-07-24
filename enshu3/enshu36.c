#include<stdio.h>
#include<string.h>


#define SIZE 16

void sort(void);

char *name[ SIZE ] = {
    "Coolidge Jr.",
    "Hoover",
    "Roosevelt",
    "Truman",
    "Eisenhower",
    "Kennedy",
    "Johnson",
    "Nixson",
    "Ford",
    "Carter",
    "Reagan",
    "Bush",
    "Clinton",
    "Bush Jr.",
    "Obama",
    "Trump"
};

int main(void)
{

    int i;

    sort();

    for (i = 0; i < SIZE - 1; i++)
    {
        printf("%s\n", name[i]);
    }

    return 0;
}


void sort(void)
{
    char *val, *sav;
    int i, j, idx;

    for (i = 0; i < SIZE - 1; i++)
    {
        sav = name[i];
        val = name[i];
        idx = i;

        for (j = i; j <= SIZE -1; j++)
        {
            if (strcmp(name[j], val) < 0)
            {
                val = name[j];
                idx = j;
            }
        }
        name[idx] = sav;
        name[i] = val;
    }
}
