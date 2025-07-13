#include<bits/stdc++.h>
using namespace std;

int main() {

    int A[] = {3,7,4,9,12,6,1,11,2,10};
    int H[12] = {0};

    int n=sizeof(A)/sizeof(A[0]);
    for(int i=0; i<n; i++) {
        H[A[i]]++;
    }
    for(int i=1; i<=12; i++) {
        if(H[i] == 0) cout << "missing element at index: " << i << endl;
    }
}