#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct Node {
    int coeff;
    int exp;
    struct Node* next;
}*poly=NULL;

void create() {
    struct Node *t, *last=NULL;
    int i, num;

    printf("Enter number of terms in polynomial: ");
    scanf("%d", &num);
    
    printf("Enter coefficient and exponent for each term:\n");
    for(i=0; i<num; i++) {
        t=(struct Node*)malloc(sizeof(struct Node));
        scanf("%d%d", &t->coeff, &t->exp);
        t->next = NULL;
        if(poly==NULL) {
            poly=last=t;
        } else {
            last->next = t;
            last = t;
        }
    }
}

long Eval(struct Node *p, int x) {
    long val = 0;
    while(p) {
        val += p->coeff * (long)pow(x, p->exp);
        p = p->next;
    }
    return val;
}

void Display(struct Node *p) {
    while (p) {
        printf("%dx^%d ", p->coeff, p->exp);
        if(p->next != NULL)
            printf("+ ");
        p = p->next;
    }
}

int main() {
    create();
    printf("The polynomial is: ");
    Display(poly);
    printf("%ld\n", Eval(poly, 1));
    return 0;
}