#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
}*first=NULL, *second=NULL, *third=NULL;

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

void create2(int A[], int n) {
    int i;
    struct Node *t, *last;
    second = (struct Node*)malloc(sizeof(struct Node));
    second->data = A[0];
    second->next = NULL;
    last = second;

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

//concatenation of two linked lists
void Concat(struct Node *p, struct Node *q) {
    third = p;
    while(p->next != NULL) {
        p=p->next;
    }
    p->next = q;
}

//merging of two linked lists
void Merge(struct Node *p, struct Node *q) {
    
    struct Node *last;
    if(p->data < q->data) {
        third = last = p;
        p = p->next;
        last->next = NULL;
    }
    else {
        third = last = q;
        q = q->next;
        last->next = NULL;
    }

    while(p != NULL && q != NULL) {
        if(p->data < q->data) {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }
    if(p != NULL) last->next = p;
    if(q != NULL) last->next = q;
}

int main() {
    int A[] = {10,20,30,40,50};
    create(A, 5);
    int B[] = {5,115,125,135,145};
    create2(B, 5);
    // printf("First Linked List\n");
    // Display(first);
    // printf("\n");
    // printf("\nSecond Linked List\n");
    // Display(second);
    // Concat(first, second);
    // printf("After Concatenation Linked List\n");
    // Display(third);
    Merge(first, second);
    printf("After Merging Linked List\n");
    Display(third);
    return 0;
}
