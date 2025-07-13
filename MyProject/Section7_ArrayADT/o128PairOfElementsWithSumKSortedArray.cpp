#include<bits/stdc++.h>
using namespace std;

int main() {

    int A[] = {1,3,4,5,6,8,9,10,12,14};
    int n = sizeof(A)/sizeof(A[0]);
    cout << "length is: " << n << endl;
    int i=0, j=n-1, k=10;
    while(i<j) {
        // cout << A[i] << ", " << A[j] << endl;
        if(A[i] + A[j] == k) {
            cout << A[i] << " + " << A[j] << " = " << k << endl;
            i++; j--;
        } else if(A[i] + A[j] < k) {
            i++;
        } else {
            j--;
        }
    }
}