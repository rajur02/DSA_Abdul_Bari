#include<bits/stdc++.h>
using namespace std;

int main() {

    //change the case of string
    char S[] = "WELCOME";
    for(int i=0; S[i]!='\0'; i++) {
        S[i]+=32;
    }
    cout << S << endl;

    //Toggle the characters in string
    char A[] = "wElCome";
    for(int i=0; A[i]!='\0'; i++) {
        if(A[i]>=65 && A[i]<=90)
            A[i]+=32;
        else if(A[i]>='a' && A[i]<=122)
            A[i]-=32;
    }
    cout << A << endl;
}