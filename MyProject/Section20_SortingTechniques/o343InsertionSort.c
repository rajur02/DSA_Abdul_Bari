#include<stdio.h>

void InserstionSort(int A[], int n) {
    int i,j,x;
    for(i=1; i<n; i++) {
        j=i-1;
        x=A[i];
        while(j>-1 && A[j]>x) {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = x;
    }
}

int  main() {

    int A[] = {3,7,9,10,6,5,12,4,11,2}, n=10;
    // int A[] = {1,2,3,4,5}, n=5;

    InserstionSort(A, n);
    for(int i=0; i<n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

}