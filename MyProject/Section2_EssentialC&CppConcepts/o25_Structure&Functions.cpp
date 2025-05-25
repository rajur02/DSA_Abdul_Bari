#include<iostream>
using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

void initialize(Rectangle *r, int l, int b) {
    r->length=l;
    r->breadth=b;
}

int area(Rectangle r)
{
    return r.length*r.breadth;
}

int perimeter(Rectangle r)
{
    return 2*(r.length+r.breadth);
}

int main()
{
    Rectangle r{0,0};
    int l, b;
    cout << "Enter length and breadth: ";
    //cin>>r.length>>r.breadth;
    cin>>l>>b;
    initialize(&r, l, b);

    cout << "Area: " << area(r) << endl << "Perimeter: " << perimeter(r) << endl;
}