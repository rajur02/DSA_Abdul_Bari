#include<bits/stdc++.h>
using namespace std;

int main() {
    char A[] = "finding";
    int H=0, x=0;
    for(int i=0; A[i]!='\0'; i++) {
        x=1;
        x=x<<(A[i]-97);
        if((x&H)>0) {
            cout << A[i] << " is duplicate" << endl;
        } else {
            H = H|x;
        }
    }

}