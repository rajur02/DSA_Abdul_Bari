#include<bits/stdc++.h>
using namespace std;

void perm(char S[], int k ) {
    static int A[10] = {0};
    static char Res[10];
    int i;
    if(S[k] == '\0') {
        Res[k]=0;
        cout << Res << endl;
    } else {
        for(i=0; S[i]!='\0'; i++) {
            if(A[i]==0) {
                Res[k] = S[i];
                A[i]=1;
                perm(S, k+1);
                A[i]=0;
            }
        }
    }
}

void Perm(char S[], int l, int h) {
    int i;
    if(l==h) {
        cout << S << endl;
    } else {
        for(i=l; i<=h; i++) {
            swap(S[l], S[i]);
            Perm(S, l+1, h);
            swap(S[l], S[i]);
        }
    }
}

void swap(char s, char i) {
    char k;
    k = s;
    s = i;
    i = k;
}

int main() {
    char S[] = "ABC";
    // perm(S, 0);
    Perm(S,0,2);  //need to check this as this is wrong
}