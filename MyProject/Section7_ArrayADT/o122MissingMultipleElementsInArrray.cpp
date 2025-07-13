#include<bits/stdc++.h>
using namespace std;

int main() {

    int A[] = {6,7,8,9,11,12,15,16,17,18,19};
    int n = sizeof(A)/sizeof(A[0]);
    int diff = 6;

    cout << "n is: " << n << endl;

    for(int i=0; i<n; i++) {
        if(A[i]-i != diff) {
            while(diff < A[i]-i) {
                cout << "Missing element is: " << i+diff << endl;
                diff++;
            }
        }
    }

    return 0;
}