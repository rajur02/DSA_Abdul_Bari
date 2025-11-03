#ifndef Chains_h
#define Chains_h

#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void SortedInsert(struct Node **H, int x) {

    struct Node *t, *q=NULL, *p=*H;

    t=(struct Node*)malloc(sizeof(struct Node)); //create new node and assign the value
    t->data = x;
    t->next = NULL;

    if(*H == NULL)
        *H=t;  //if there are no nodes at the given index t is the first node
    else {
        while(p && p->data<x) {  //if the x is less than the given node at the index of array
            q=p;                    //assign it to tail pointer and move to next
            p=p->next;
        }
        if(p == *H) {    //if p is head node 
            t->next = *H;  //assign new node's next to head node
            *H = t;   //make the head node as new node
        }
        else {
            t->next = q->next;  //insert the node in between nodes
            q->next = t;
        }
    }
}

struct Node* Search(struct Node *p, int key) {
    
    while(p!=NULL) {
        if(key == p->data) {
            return p;
        }
        p=p->next;
    }
    return NULL;
}


#endif