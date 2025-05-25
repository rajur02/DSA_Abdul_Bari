#include<iostream>
using namespace std;

int* func(int size) {
    int *p;
    p=new int[size];
    for(int i=0; i<size; ++i)
        p[i]=i+5;
    return p;
}

void fun(int A[], int n) {
    for(int i =0; i<n; ++i) 
        cout << A[i] << endl;
    A[0]=15;
}

int main()
{
    int A[]={2,4,6,8,10};
    int n=sizeof(A)/sizeof(int);

    cout << sizeof(A)/sizeof(int) << endl;

    fun(A,n);
    for(auto x : A)
        cout << x << ", ";
    cout << endl;

    //function returns an array
    int* ptr;
    int sz=5;
    ptr=func(sz);
    for(int i=0; i<sz; ++i)
        cout << ptr[i] << ", ";
    cout << endl;
}