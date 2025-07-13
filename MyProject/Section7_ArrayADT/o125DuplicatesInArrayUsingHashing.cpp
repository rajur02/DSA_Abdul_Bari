#include<bits/stdc++.h>
using namespace std;

int main() {

    int A[] = {3,6,8,8,10,12,15,15,15,20};
    int H[21]={0};

    for(int i=0; i<sizeof(A)/sizeof(A[0]); i++) {
        H[A[i]]++;
    }

    for(int i=0; i<=20; i++) {
        if(H[i]>1) {
            cout << i << " appeared " << H[i] << " times" << endl;
        }
    }

    // for(int i=0; i<=sizeof(H)/sizeof(H[0]); i++) {
    //     cout << "H is: " << H[i] << " ";
    // }

}