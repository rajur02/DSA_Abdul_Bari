//call by value

#include<iostream>
using namespace std;

void swap(int x, int y)
{
    int temp = x;
    x=y;
    y=temp;
}

int main()
{
    int num1=10, num2=15;
    swap(num1, num2);
    cout << num1 << ", " << num2 << endl;
}