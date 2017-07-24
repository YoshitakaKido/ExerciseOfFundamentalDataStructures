#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *head;


void add_head(int x)
{
    struct node *p;
    
    /*** 
     * 新しい要素の作成
     * mallocは、引数のサイズのメモリー領域を確保する関数
     * sizeofは引数に指定した型のメモリー上でのサイズを返す関数
     ***/
    p = (struct node *)malloc(sizeof(struct node));
    p->data = x;

    p->next = head;
    head = p;
}


void print_list(struct node *q)
{
    struct node *p;

    printf("list\n");
    for(p = q; p != NULL; p = p->next)
    {
        printf("%d\n", p->data);
    }
}


main(int argc, char *argv[])
{
    int i, val, n;
    
    head = NULL;

    n = atoi(argv[1]);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &val);
        add_head(val);    
    }

    print_list(head);

    return 0;
}
