#include<bits/stdc++.h>
using namespace std;

int main() {
    char A[] = "Painter", B[] = "Painting";
    int i,j;
    for(i=0, j=0; A[i]!='\0' && B[j]!='\0'; i++, j++) {
        if(A[i] != B[j])
            break;
    }
    if(A[i] == B[j]) cout << "both are equal";
    else if(A[i]<B[j]) cout << "A is smaller that B";
    else cout << "B is greater than A";
}