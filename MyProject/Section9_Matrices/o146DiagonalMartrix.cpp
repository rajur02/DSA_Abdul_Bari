#include<bits/stdc++.h>
using namespace std;

class Diagonal {
private:
    int *A;
    int n;
public:
    Diagonal() {
        n=2;
        A = new int[n];
    }

    Diagonal(int n) {
        this->n = n;
        A = new int[n];
    }

    ~Diagonal() {
        delete []A;
    }

    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();
};

void Diagonal::Set(int i, int j, int x) {
    if(i==j) 
        A[i-1]=x;
}

int Diagonal::Get(int i, int j) {
    if(i==j) 
        return A[i-1];
    else
        return 0;
}

void Diagonal::Display() {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i==j) 
                cout << A[i] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}

int main() {

    Diagonal d(4);
    for(int i=1; i<=4; i++) {
        d.Set(i,i,i*2);
    }
    d.Display();
    cout << d.Get(2,2);
}