//call by address
#include<iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

void fun(struct Rectangle *rect) {
    rect->length=20;
    cout << "Length: " << rect->length << ", " << "Breadth: " << rect->breadth << endl;
}

int main()
{
    struct Rectangle r{10,5};
    fun(&r);
    cout << "Length: " << r.length << ", " << "Breadth: " << r.breadth << endl; 
}