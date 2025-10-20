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

struct Node* LinearSearch(struct Node *p, int key) {

    while(p != NULL) {
        if(key == p->data)
            return p;
        p = p->next;
    }
    return NULL;
} 

// Recursive linear search
struct Node* RLinearSearch(struct Node *p, int key) {
    if(p==NULL)
        return NULL;
    if(key == p->data)
        return p;
    return RLinearSearch(p->next, key);
}

// Move to front linear search
struct Node* SLinearSearch(struct Node *p, int key) {
    struct Node *q = NULL;
    while(p != NULL) {
        if(key == p->data) {
            q->next = p->next;
            p->next = first;
            first = p;
            return p; 
        }
        q=p;
        p=p->next;
    }
}

void Display(struct Node *p) {
    while(p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main() {
    struct Node *temp;
    int A[] = {3,5,7,10,25,8,32,2};
    create(A, 8);
    temp = LinearSearch(first, 25);
    if(temp)
        printf("Key found: %d\n", temp->data);
    else
        printf("Key not found\n");
    printf("-----------------------\n");
    temp = RLinearSearch(first, 10);
    if(temp)
        printf("Key found: %d\n", temp->data);
    else
        printf("Key not found\n");

    printf("-----------------------\n");
    temp = SLinearSearch(first, 25);
    temp = SLinearSearch(first, 8);
    if(temp)
        printf("Key found: %d\n", temp->data);
    else
        printf("Key not found\n");
    Display(first);
    return 0;
}