#include<iostream>
using namespace std;

class Element {
public:
    int i;
    int j;
    int x;
};

class Sparse {
private:
    int m;
    int n;
    int num;
    Element *ele;
public:
    Sparse(int m, int n, int num) {
        this->m = m;
        this->n = n;
        this->num = num;
        ele = new Element[num];
    }

    ~Sparse() {
        delete[] ele;
    }

    /*void read() {
        cout << "Enter non-zero elements ";
        for(int i=0; i<num; i++) {
            cin >> ele[i].i >> ele[i].j >> ele[i].x;
        }
    }

    void display() {
        int k=0;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(i == ele[k].i && j == ele[k].j) 
                    cout << ele[k++].x << " ";
                else
                    cout << "0 ";
            }
            cout << endl;
        }
    }*/

    Sparse operator+(Sparse &s);
    friend istream & operator>>(istream &is, Sparse &s);
    friend ostream & operator<<(ostream &os, Sparse &s);
};

Sparse Sparse::operator+(Sparse &s) {
    int i,j,k;
    if(m != s.m || n != s.n) return Sparse(0, 0, 0);
    i=j=k=0;
    Sparse  *sum = new Sparse(m, n, num + s.num);

    while(i<num && j<s.num) {
        if(ele[i].i < s.ele[j].i) 
            sum->ele[k++]=ele[i++];
        else if(ele[i].i > s.ele[j].i)
            sum->ele[k++]=s.ele[j++];
        else {
            if(ele[i].j < s.ele[j].j) 
                sum->ele[k++]=ele[i++];
            else if(ele[i].j > s.ele[j].j)
                sum->ele[k++]=s.ele[j++];
            else {
                sum->ele[k]=ele[i];
                sum->ele[k++].x = ele[i++].x + s.ele[j++].x;
            }
        }        
    }
    for(; i<num; i++) 
        sum->ele[k++]=ele[i];
    for(; j<s.num; j++)
        sum->ele[k++]=s.ele[j];
    sum->m = m;
    sum->n = n;
    sum->num = k;
    return *sum;
}

istream & operator>>(istream &is, Sparse &s) {
    cout << "Enter non-zero elements ";
    for(int i=0; i<s.num; i++) {
        cin >> s.ele[i].i >> s.ele[i].j >> s.ele[i].x;
    }
    return is;
}

ostream & operator<<(ostream &os, Sparse &s) {
    int k=0;
    for(int i=0; i<s.m; i++) {
        for(int j=0; j<s.n; j++) {
            if(i == s.ele[k].i && j == s.ele[k].j) 
                cout << s.ele[k++].x << " ";
            else
                cout << "0 ";
            }
        cout << endl;
    }
    return os;
}

int main() {
    Sparse s1(5, 5, 5);
    Sparse s2(5, 5, 5);
    cin>>s1;
    cin>>s2;
    Sparse s3 = s1 + s2;
    cout << "First Matrix: " << endl << s1;
    cout << "Second Matrix: " << endl << s2;
    cout << "Sum Matrix: " << endl << s3;
}