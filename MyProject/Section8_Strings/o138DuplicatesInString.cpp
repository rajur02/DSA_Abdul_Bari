#include<bits/stdc++.h>
using namespace std;

//2nd method - using Hash table
void DuplicateUsingHashing(char A[]) {
    int H[26] = {0};
    for(int i=0; A[i]!='\0'; i++) {
        H[A[i]-97]++;
    }
    for(int i=0; i<26; i++) {
        if(H[i]>1) {
            cout << char(i+97) << " apperared " << H[i] << " times " << endl;
        }
    }
}

int main() {

    char A[] = "finding";
    //1st method - by comparing with other letters
    /*for(int i=0; A[i]!='\0'; i++) {
        int count=1;
        if(A[i] != -1) {
            for(int j=i+1; A[j]!='\0'; j++) {
                if(A[i]==A[j]) {
                    count++;
                    A[j]=-1;
                }
            }
            if(count > 1) cout << A[i] << " found " << count << " times" << endl;
        }
    }*/

    DuplicateUsingHashing(A);
}