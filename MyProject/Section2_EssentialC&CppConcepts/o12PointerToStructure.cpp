#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

int main()
{
    Rectangle r{10,5};
    cout << r.length << endl;
    cout << r.breadth << endl;

    //static memory allocation
    Rectangle *p=&r;
    cout << p->length << endl;
    cout << p->breadth << endl;

    //Dynamic memory allocation
    Rectangle *p1;
    //p1=(struct Rectangle*)malloc(sizeof(struct Rectangle));  //C language
    p1 = new Rectangle;  //C++ language
    p1->length=15;
    p1->breadth=7;
    cout << p1->length << endl;
    cout << p1->breadth << endl;
}