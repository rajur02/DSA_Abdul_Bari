#include<bits/stdc++.h>
using namespace std;

int main() {

    //calculate vowels and consonants
    char A[] = "how are you";
    int i, vcount=0, ccount=0;
    for(i=0; A[i]!='\0'; i++) {
        if(A[i]=='a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u'
         || A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U') {
            vcount++;
        } else if((A[i]>=65 && A[i]<=90) || (A[i]>=97 && A[i]<=122)) {
            ccount++;
        }
    }
    cout << "vowels are: " << vcount << ", Consonants are: " << ccount << endl;

    //Counting the words in a string
    char B[] = "How are    you";
    int j, words=1;
    for(j=0; B[j]!='\0'; j++) {
        if(A[j] == ' ' && A[j-1] != ' ') {
            words++;
        }
    }
    cout << "Total words are: " << words;
}