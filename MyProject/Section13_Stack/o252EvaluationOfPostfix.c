#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

int prec(char x) {
    if(x=='+' || x=='-')
        return 1;
    else if(x=='*' || x=='/')
        return 2;
    return 0;
}

int isOperand(int x) {
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return 0;
    else
        return 1;
}

char * InToPost(char *infix)
{
    int i=0, j=0;
    char *postfix;
    long len = strlen(infix);
    postfix = (char *)malloc((len+2)*sizeof(char));
    while(infix[i] != '\0') {
        if(isOperand(infix[i]))
            postfix[j++] = infix[i++];
        else {
            if(prec(infix[i])>prec(top->data))
                push(infix[i++]);
            else {
                postfix[j++]=pop();
            }
        }
    }

    while(top != NULL)
        postfix[j++] = pop();
    postfix[j]='\0';
    return postfix;
}

int Eval(char *postfix) {
    int i=0, x1, x2, r;
    for(i=0; postfix[i]!='\0'; i++) {
        if(isOperand(postfix[i])) {
            push(postfix[i]-'0');
        }
        else {
            x2=pop(); x1=pop();
            switch(postfix[i])
            {
                case '+' : r=x1+x2; break;
                case '-' : r=x1-x2; break;
                case '*' : r=x1*x2; break;
                case '/' : r=x1/x2; break;
            }
            push(r);
        }
    }
    return top->data;
}


int main() {

    // char *infix = "a+b*c-d/e";
    char *postfix = "234*+82/-";
    // push('#');
    //char *postfix=InToPost(infix);
    //printf("%s ", postfix);
    printf("Result is %d\n", Eval(postfix));
}