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

//reversing by using an auxiliary array
void Reverse(struct Node *p) {
    int *A, i=0;;
    struct Node *q = p;
    A=(int *)malloc(sizeof(int)*count(p));
    while(q != NULL) {
        A[i] = q->data;
        q = q->next;
        i++;
    }
    q = p;
    i--;
    while(q != NULL) {
        q->data = A[i];
        q = q->next;
        i--;
    }
}

//reversing by sliding pointers
void Reverse2(struct Node *p) {
    struct Node *q=NULL, *r=NULL;
    while(p != NULL) {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

//reversing by recursion
void Reverse3(struct Node *q, struct Node *p) {
    if(p) {
        Reverse3(p, p->next);
        p->next = q;
    } else {
        first = q;
    }
}

int main() {
    int A[] = {10,20,30,40,50};
    create(A, 5);
    //Reverse(first);
    // Reverse2(first);
    Reverse3(NULL, first);
    Display(first);
    return 0;
}