#include<bits/stdc++.h>
using namespace std;

int main() {

    int A[] = {3,6,8,8,10,12,15,15,15,20};
    //Find the duplicate in an array
    int lastDigit=0, n=sizeof(A)/sizeof(A[0]);
    for(int i=0; i<n; i++) {
        if(A[i]==A[i+1] && A[i] != lastDigit) {
            cout << "Duplicate digit is: " << A[i] << endl;
            lastDigit = A[i];
        }
    }

    //Count the number of duplicates
    for(int i=0; i<n; i++) {
        if(A[i]==A[i+1]) {
            int j=i+1;
            while(A[j]==A[i]) j++;
            cout << A[i] << " is appearing " << j-i << " times" << endl;
            i=j-1;
        }
    }

}