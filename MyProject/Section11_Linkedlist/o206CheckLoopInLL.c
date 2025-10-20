#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
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

int count(struct Node *p) {
    int count=0;
    while(p) {
        count++;
        p=p->next;
    }
    return count;
}

void Display(struct Node *p) {
    while(p != NULL) {
        printf("%d ", p->data);
        p=p->next;
    }
}

//function to check loop in linked list
int isLoop(struct Node *f) {
    struct Node *p, *q;
    p=q=f;
    do {
        p=p->next;
        q=q->next;
        q=q?q->next:q;
    } while(p && q && p!=q);
    return p==q?1:0;
}

int main() {
    struct Node *t1, *t2;
    int A[] = {10,20,30,40,50};
    create(A, 5);

    t1= first->next->next; //30
    t2= first->next->next->next->next; //50
    t2->next = t1; //creating loop

    printf("Is there a loop in linked list? %s\n", isLoop(first)?"Yes":"No");
}