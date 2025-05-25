#include<iostream>
using namespace std;

class Rectangle {
    int length;
    int breadth;
public:
    Rectangle(int l, int b) {
        length=l;
        breadth=b;
    }

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);
    }
};

int main()
{
    int l,b;
    cout << "Enter length and breadth: ";
    cin>>l>>b;
    Rectangle r{l,b};

    cout << "Area: " << r.area() << endl << "Perimeter: " << r.perimeter() << endl;
}