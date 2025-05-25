#include<iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
    char x;
}r2,r3;

int main()
{
    struct Rectangle r1={10,5};
    r1.length=15;
    r1.breadth=7;
    cout << r1.length << endl;
    cout << r1.breadth << endl;
    cout << sizeof(r1) << endl;
}