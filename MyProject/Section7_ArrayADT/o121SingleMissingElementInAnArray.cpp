#include <bits/stdc++.h>
using namespace std;

// For n natural numbers starting from 1
int MissingElement(int A[], int n)
{

    int sum = 0;
    for (int i = 0; i < n-1; i++)
    {
        sum = sum + A[i];
    }
    int total = (n * (n + 1)) / 2;
    return total - sum;
}

// For n natural numbers starting from any number
void randomMissingNumber(int B[], int n) {

    int diff = B[0];
    for(int i=0; i<n-1; i++) {
        if(B[i]-i != diff) {
            cout << "Missing element is: " << i+diff << endl;
            break;
        }
    }

} 

int main()
{

    int A[] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12};
    int n = 12;
    cout << "Missing Element is: " << MissingElement(A, n) << endl;
    int B[] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12};
    randomMissingNumber(B, 12);
    return 0;
}