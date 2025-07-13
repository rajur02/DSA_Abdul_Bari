#include<bits/stdc++.h>
using namespace std;

void isPalindrome(char A[], int size) {

    char B[size];
    int i,j;
    for(i=0; A[i]!='\0'; i++) {}
    i=i-1;
    for(j=0; i>=0; i--, j++) {
        B[j] = A[i];
    }

    int k,l;
    for(k=0,l=0; A[k]!='\0' && B[l]!='\0'; k++,l++) {
        if(A[k]!=B[l])
            break;
    }
    if(A[k]==B[l]) cout << "is palindrome" << endl;
    else cout << "not palindrome" << endl;
}

void isPalindrome(char A[]) {
    int i,j;
    for(j=0; A[j]!='\0'; j++) {}
    j=j-1;
    for(i=0; i<j; i++, j--) {
        if(A[i]!=A[j])
            break;
    }
    if(A[i]==A[j]) cout << "A is palindrome" << endl;
    else cout << "A is not palindrome" << endl;
}

int main() {
    char A[] = "MadAm";
    int size = sizeof(A)/sizeof(A[0]);

    for(int i=0; A[i]!='\0'; i++) {
        if(A[i]>=65 && A[i]<=90)
            A[i]+=32;
    }
    isPalindrome(A, size);
    isPalindrome(A);
}