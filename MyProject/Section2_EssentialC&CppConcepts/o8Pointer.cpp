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
    int a=10;
    int *p;
    p=&a;
    cout << a << endl;
    printf("using pointer %d\n", *p); 

    //Pointer to an array
    int A[5] {2,4,6,8,10};
    int *p1;
    p1=A;
    for(int i=0; i<5; i++)
        cout << p1[i] << ", ";
    cout << endl;

    //Heap memory allocation
    int *p2;
    p2 = (int*)malloc(5*sizeof(int));  //C language
    //p2=new int[5];  //C++ language

    p2[0]=5; p2[1]=10; p2[2]=15; p2[3]=20; p2[4]=25;

    for(int i=0; i<5; ++i)
        cout << p2[i] << ", ";
    cout << endl;
    //delete []p1; 
    free(p2);

    int *p3;
    float *p4;
    char *p5;
    double *p6;
    struct Rectangle *p7;

    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;
    cout << sizeof(p6) << endl;
    cout << sizeof(p7) << endl;
}