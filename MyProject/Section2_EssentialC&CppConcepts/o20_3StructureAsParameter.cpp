//Dynamic memory allocation and returning the struct pointer
#include<iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

Rectangle *fun() {
    Rectangle *p;
    p=new Rectangle;
    p->length=10;
    p->breadth=20;
    return p;
}

int main()
{
    Rectangle *rect = fun();
    cout << "Length: " << rect->length << ", " << "Breadth: " << rect->breadth << endl;
}