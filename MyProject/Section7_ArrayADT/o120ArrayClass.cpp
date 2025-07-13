#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;    

template <typename T>
class Array {
private:
    T *A;
    int size;
    int length;

public:
    Array() {
        size = 10;
        length = 0;
        A = new T[size];
    }

    Array(int sz) {
        size = sz;
        length = 0;
        A = new T[size];
    }

    ~Array() {
        delete []A;
    }

    void Display();
    void Insert(int index, T x);
    T Delete(int index);
};

template<class T>
void Array<T>::Display() {
    for(int i=0; i<length; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

template<class T>
void Array<T>::Insert(int index, T x) {
    
    if(index>=0 && index <=length) {
        for(int i=length-1; i>=index; i--) {
            A[i+1] = A[i];
        }
        A[index] = x;
        length++;
    }
}

template<class T>
T Array<T>::Delete(int index) {
    T x = A[index];
    if(index >= 0 && index < length) {
        for(int i=index; i<length-1; i++) {
            A[i] = A[i+1];
        }
        length--;
    }
    return x;
}

int main() {

    Array<int> arr(10);
    arr.Insert(0, 10);
    arr.Insert(1, 20);
    arr.Insert(2, 30);
    arr.Display();
    arr.Delete(0);
    arr.Display();
}