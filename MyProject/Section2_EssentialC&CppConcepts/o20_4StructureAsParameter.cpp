//Structure with Array member

#include<iostream>
using namespace std;

struct Test {
    int A[5];
    int n;
};

void fun(Test *t) {
    t->A[0]=5;
    t->A[1]=10;
}

int main()
{
    Test t{{1,2,3,4,5},5};
    fun(&t);
    for(int i=0; i<t.n; ++i)
        cout << t.A[i] << ", ";
    cout << endl;
}
