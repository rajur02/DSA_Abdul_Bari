#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
}*top=NULL;

void push(int x) {
    struct Node *t;
    t=(struct Node*)malloc(sizeof(struct Node));
    if(t==NULL)
        printf("Stack is full");
    else {
        t->data = x;
        t->next = top;
        top = t;
    }
}

int pop() {

    struct Node *t;
    int x= -1;
    if(top == NULL) 
        printf("Stack is empty");
    else {
        t=top;
        top=top->next;
        x=t->data;
        free(t);
    }
    return x;
}

int peek(int index) {
    int i;
    struct Node *p=top;
    for(i=0; i<index-1; i++)
        p=p->next;
    if(p!=NULL)
        return p->data;
    else
        return -1;
}

int stackTop()
{
    if(top)
        return top->data;
    return -1;
}

int isEmpty() {
    return top ? 0 : 1;
}

int isFull() {
    struct Node *t = (struct Node*)malloc(sizeof(struct Node));
    int r = t ? 1 : 0;
    free(t);
    return r;
}

void Display()
{
    struct Node *p;
    p=top;
    while(p!=NULL)
    {
        printf("%d ", p->data);
        p=p->next;
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);

    //printf("pop: %d \n", pop());
    printf("peek: %d \n", peek(2));
    printf("stackTop: %d \n", stackTop());
    printf("isEmpty: %d \n", isEmpty());
    printf("isFull: %d \n", isFull());
    Display();
}