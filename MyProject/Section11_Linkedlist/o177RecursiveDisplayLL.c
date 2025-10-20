#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[], int n) {
    int i;
    struct Node *t, *last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(i=1; i<n; i++) {
        t = (struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

//print elements in the same order using recursion
void RDisplay(struct Node *p) {
    if(p != NULL) {
        printf("%d ", p->data);
        RDisplay(p->next);
    }
}

//print elements in reverse order using recursion
void RRDisplay(struct Node *p) {
    if(p != NULL) {
        RRDisplay(p->next);
        printf("%d ", p->data);
    }
}

int main() {
    int A[] = {3,5,7,10,15};
    create(A, 5);
    RDisplay(first);
    printf("\n");
    RRDisplay(first);
    return 0;
}