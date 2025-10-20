#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
}*first=NULL, *last=NULL;

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

// Inserting a node at the end of linked list
void Insertlast(struct Node *p, int x) {
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;
    if(first==NULL) {
        first = last = t;
    }
    else {
        last->next = t;
        last = t;
    }
}
int main() {
    Insertlast(first, 10);
    Insertlast(first, 20);
    Insertlast(first, 30);
    Insertlast(first, 40);
    Display(first);
    return 0;
}