#include<iostream>
using namespace std;

int area(int l, int b)
{
    return l*b;
}

int perimeter(int l, int b)
{
    return 2*(l+b);
}

int main()
{
    int length=0, breadth=0;

    cout << "Enter length and breadth: ";
    cin>>length>>breadth;

    cout << "Area: " << area(length,breadth) << endl << "Perimeter: " << perimeter(length,breadth) << endl;
}