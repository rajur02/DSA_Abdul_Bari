#include<bits/stdc++.h>
using namespace std;

int validate(char *word) {

    int i;
    for(i=0; word[i]!='\0'; i++) {
        if(!(word[i]>=65 && word[i]<=90) && !(word[i]>=97 && word[i]<=122) && !(word[i]>=48 && word[i]<=57))
            return 0;
    }
    return 1;
}

int main() {

    char *word = "anil123";
    if(validate(word)) {
        cout << "Valid string" << endl;
    } else {
        cout << "Invalid string";
    }
}