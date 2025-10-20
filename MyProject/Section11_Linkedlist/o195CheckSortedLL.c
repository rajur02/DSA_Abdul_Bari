#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<stdbool.h>

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

// Function to check if the linked list is sorted
bool isSorted(struct Node *p) {
    
    int x = INT_MIN;
    while(p != NULL) {
        if(p->data < x)
            return false;
        x = p->data;
        p=p->next;
    }
    return true;
}

int main() {
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    if(isSorted(first))
        printf("Linked List is sorted\n");
    else
        printf("Linked List is not sorted\n");
    Display(first);
    return 0;
}