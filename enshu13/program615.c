#include<stdio.h>

void TreeInit(NODE *tree, int num);
void TreeSet(NODE *tree, int child, int parent);
void OPENInit(OPEN *open);
void Enqueue(OPEN *queue, NODE *node);
NODE *Dequeue(OPEN *queue);
int BFSearch(int *graph, int start, int goal, NODE *t);

main(){
    int i;
    NODE t[dGraphSize];

}
