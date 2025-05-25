#include<iostream>
using namespace std;

template<class T>
class Arithmetic {
private: 
    T a; 
    T b;
public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b) {
    this->a=a;
    this->b=b;
}

template<class T>
T Arithmetic<T>::add() {
    T c;
    c=a+b; 
    return c;
}

template<class T>
T Arithmetic<T>::sub() {
    T c;
    c=a-b; 
    return c;
}

int main()
{
    Arithmetic<int> ar(5,2);
    cout << "Add: " << ar.add() << endl;
    cout << "Sub: " << ar.sub() << endl;

    Arithmetic<float> ar1(5.1,2.2);
    cout << "Add: " << ar1.add() << endl;
    cout << "Sub: " << ar1.sub() << endl;

    Arithmetic<char> ar2('A','B');
    cout << "Add: " << (int)ar2.add() << endl;
    cout << "Sub: " << (int)ar2.sub() << endl;
}