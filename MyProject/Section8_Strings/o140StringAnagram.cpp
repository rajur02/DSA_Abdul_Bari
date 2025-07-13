#include<bits/stdc++.h>
using namespace std;

int main() {
    char A[] = "decimal", B[] = "medical";
    int aSize, bSize;
    aSize = sizeof(A)/sizeof(A[0]);
    bSize = sizeof(B)/sizeof(B[0]);
    int i, j, H[26] = {0};

    if(aSize != bSize) {
        cout << "Not Anagram" << endl;
        return 0;
    }

    for(i=0; A[i]!='\0'; i++) {
        H[A[i]-97]++;
    }
    for(i=0; B[i]!='\0'; i++) {
        H[B[i]-97]--;
        if(H[B[i]-97] < 0) {
            cout << "Not Anagram" << endl;
            break;
        }
    }
    if(B[i]=='\0') cout << "It is Anagram" << endl;

    //If not checking the size include this block
    /*for(j=0; j<26; j++) {
        if(H[j]>0) {
            cout << "It's not anagram" << endl;
            break;
        }
    }
    if(H[j]=='\0') cout << "It is Anagram" << endl;*/
}