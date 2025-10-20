#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Node {
    int data;
    struct Node *next;
}*first=NULL;

void create(int A[], int n) {
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    for(i=1;i<n;i++) {
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

// Function to find maximum element in linked list
int Max(struct Node *p) {
    int max = INT_MIN;
    while(p) {
        if(p->data > max)
            max = p->data;
        p=p->next;
    }
    return max;
}

// Recursive function to find maximum element in linked list
int RMax(struct Node *p) {
    int x=0;
    if(p==0)
        return INT_MIN;
    x=RMax(p->next);
    return (x>p->data?x:p->data);
}

// Function to find minimum element in linked list
int Min(struct Node *p) {
    int min = INT_MAX;
    while(p) {
        if(p->data < min)
            min = p->data;
        p=p->next;
    }
    return min;
}

// Recursive function to find minimum element in linked list
int RMin(struct Node *p) {
    int min=0;
    if(p==0)
        return INT_MAX;
    min=RMin(p->next);
    return (min<p->data?min:p->data);
}

int main() {
    int A[] = {3,5,7,10,25,1,12,20};
    create(A, 8);
    printf("Maximum element in linked list is %d\n", Max(first));
    printf("Maximum element in linked list using recursion is %d\n\n", RMax(first));
    printf("Minimum element in linked list is %d\n", Min(first));
    printf("Minimum element in linked list using recursion is %d\n", RMin(first));
    return 0;
}