#include<iostream>
#include<stdio.h>
#include "QueueCpp.h"
using namespace std;

class Tree {
private:
    Node *root;
public:
    Tree() {
        root=NULL;
    }
    void createTree();
    void PreOrder() {PreOrder(root);}
    void PreOrder(Node *t);
    void PostOrder() {PostOrder(root);}
    void PostOrder(Node *t);
    void InOrder() {InOrder(root);}
    void InOrder(Node *t);
    void LevelOrder() {LevelOrder(root);}
    void LevelOrder(Node *t);
    int Height() {return Height(root);}
    int Height(Node *t);
};

void Tree::createTree() {
    Node *p, *t;
    int x;
    Queue q(100);

    printf("Enter root value: ");
    scanf("%d", &x);
    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);

    while(!q.isEmpty()) {

        p=q.dequeue();
        printf("Enter left child of %d: ", p->data);
        scanf("%d", &x);
        if(x != -1) {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }

        printf("Enter right child of %d: ", p->data);
        scanf("%d", &x);
        if(x != -1) {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}


//preorder traversal
void Tree::PreOrder(Node *p) {
    if(p) {
        printf("%d ", p->data);
        PreOrder(p->lchild);
        PreOrder(p->rchild);
    }
}

void Tree::InOrder(Node *p) {
    if(p) {
        InOrder(p->lchild);
        printf("%d ", p->data);
        InOrder(p->rchild);
    }
}

void Tree::PostOrder(Node *p) {
    if(p) {
        PostOrder(p->lchild);
        PostOrder(p->rchild);
        printf("%d ", p->data);
    }
}

void Tree::LevelOrder(Node *root) {
    
    Queue q(100);

    printf("%d ", root->data);
    q.enqueue(root);

    while(!q.isEmpty()) {
        root=q.dequeue();
        if(root->lchild) {
            printf("%d ", root->lchild->data);
            q.enqueue(root->lchild);
        }
         if(root->rchild) {
            printf("%d ", root->rchild->data);
            q.enqueue(root->rchild);
        }
    }
}

// int count(struct Node *root) {
//     if(root)
//         return count(root->lchild) + count(root->rchild) + 1;
//     return 0;
// }

int Tree::Height(Node *root) {
    int x=0, y=0;
    if(root == 0)
        return 0;
    x=Height(root->lchild);
    y=Height(root->rchild);
    if(x>y)
        return x+1;
    else    
        return y+1;
}

int main() {
    Tree t;
    t.createTree();
    cout << "PreOrder: ";
    // t.PreOrder(t.root);
    t.PreOrder();
    cout << endl;
    cout << "Inorder: ";
    t.InOrder();
    cout << endl;

}