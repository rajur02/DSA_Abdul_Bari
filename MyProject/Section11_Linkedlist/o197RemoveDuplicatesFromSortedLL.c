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

// Function to remove duplicates from a sorted linked list
void RemoveDuplicates(struct Node *p) {
    struct Node *q=p->next;
    while(q != NULL) {
        if(p->data != q->data) {
            p=q;
            q=q->next;
        } else {
            p->next = q->next;
            free(q);
            q=p->next;
        }
    }
}

int main() {
    int A[] = {10, 20, 20, 30, 30, 30, 40, 50};
    create(A, 8);
    RemoveDuplicates(first);
    Display(first);
    return 0;
}