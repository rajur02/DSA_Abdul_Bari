#include<stdio.h>
#include<stdlib.h>

struct Node {
    char data;
    struct Node *next;
}*top=NULL;

void push(char x) {
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

char pop() {

    struct Node *t;
    char x= -1;
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

int isMatched(char open, char close) {
    if(open == '('  && close == ')') return 1;
    if(open == '['  && close == ']') return 1;
    if(open == '{'  && close == '}') return 1;
    return 0;
}

int isBalanced(char *exp) {
    int i;
    for(i=0; exp[i]!='\0'; i++) {
        if(exp[i] == '{' || exp[i] == '(' || exp[i] == '[') 
            push(exp[i]);
        else if(exp[i] == '}' || exp[i] == ')' || exp[i] == ']')
        {
            if(top==NULL) {
                printf("top is null\n");
                return 0;
            }
            char popped = pop();

            if(!isMatched(popped, exp[i])) {
                printf("parenthesis doesn't match\n");
                return 0;
            }
        }
    }
    if(top==NULL) {
        printf("end top is null\n");
        return 1;
    }
    else {
        printf("end top is not null\n");
        while(!(isEmpty())) pop();
        return 0;
    }
    // return top ? 0 : 1;
}

int main() {
    char *exp="{([a+b]*[c-d]\e)}";
    printf("%d", isBalanced(exp));
}