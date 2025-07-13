#include<bits/stdc++.h>
using namespace std;

int main()
{
    int A[] = {6,3,8,10,16,7,5,2,9,4};
    int n = sizeof(A)/sizeof(A[0]);
    int k=10;

    //1st method
    // for(int i=0; i<n; i++) {
    //     for(int j=i+1; j<n; j++) {
    //         if(A[i]+A[j]==k)
    //         {
    //             cout << A[i] << " + " << A[j] << " = " << k << endl;
    //         }
    //     }
    // }

    //2nd method: using hash table
    int H[17] = {0};
    for(int i=0; i<n; i++) {
        //Need to check the boundary here as we get the undefined behavior
        if(H[k-A[i]] != 0) {
            cout << A[i] << " + " << k-A[i] << " = " << k << " and H[k-A[i]] " << H[k-A[i]] << endl;
        }
        H[A[i]]++;
    }

    //Undefined output 
    // 16 + -6 = 10 and H[k-A[i]] 1462132394
    // 7 + 3 = 10 and H[k-A[i]] 1
    // 2 + 8 = 10 and H[k-A[i]] 1
    // 4 + 6 = 10 and H[k-A[i]] 1
}