#include<bits/stdc++.h>
using namespace std;

int main() {

    //1st method - using two char arrays
    char A[] = "python";
    char B[7];
    int i,j;
    for(i=0; A[i]!='\0'; i++) {}
    i=i-1;
    for(j=0; i>=0; i--, j++) {
        B[j]=A[i];
    }
    B[j]='\0';
    cout << "B is: " << B << endl;

    //2nd method - using one array
    char C[] = "python";
    char t;
    int k, l;
    for(k=0; C[k]!='\0'; k++) {}
    k=k-1;
    for(l=0; l<k; l++, k--) {
        t = C[l];
        C[l] = C[k];
        C[k] = t;
    }
    cout << "C is: " << C << endl;
}