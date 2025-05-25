#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter size: ";
    cin>>n;
    int A[n];
    for(auto& x : A) {
        cin>>x;
    }
    for(auto x : A) {
        cout << x << ", ";
    }
    cout << endl;
    cout << sizeof(A) << endl;
}