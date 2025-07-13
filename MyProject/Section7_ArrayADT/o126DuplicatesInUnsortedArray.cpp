#include<bits/stdc++.h>
using namespace std;

int main() {

    int A[] = {8,3,6,4,6,5,6,8,2,7};
    int n = sizeof(A)/sizeof(A[0]);
    //1st method using iterative method
    /*for(int i=0; i<n-1; i++) {
        int count = 1;
        if(A[i] != -1) {
            for(int j=i+1; j<n; j++) {
                if(A[i] == A[j]) {
                    count++;
                    A[j] = -1;
                }
            }
            if(count>1) cout << A[i] << " appeared " << count << " times" << endl;
        } 
    }*/

    //2nd method - hashing method
    int H[9] = {0};
    for(int i=0; i<n-1; i++) {
        H[A[i]]++;
    }

    for(int i=0; i<=sizeof(H)/sizeof(H[0]); i++) {
        cout << "H is: " << H[i] << " ";
    }

    for(int i=0; i<9; i++) {
        if(H[i] > 1) {
            cout << i << " appeared " << H[i] << " times using hashing" << endl;
        }
    }

    return 0;
}