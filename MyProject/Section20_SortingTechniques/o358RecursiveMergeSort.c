#include<stdio.h>

void Merge(int A[], int l, int mid, int h) {

    int i=l,j=mid+1,k=l;
    int B[h+1];

    while(i<=mid && j<=h) {
        if(A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    for(; i<=mid; i++) B[k++] = A[i];
    for(; j<=h; j++) B[k++] = A[j];
    for(int i=l; i<=h; i++) A[i] = B[i];
}

void RMergeSort(int A[], int l, int h) {

    int mid;
    if(l<h) {
        mid = (l+h)/2;
        RMergeSort(A, l, mid);
        RMergeSort(A, mid+1, h);
        Merge(A, l, mid, h);
    }
}

int  main() {

    int A[] = {11,13,7,12,16,9,24,5,10,3}, n=10;
    // int A[] = {1,2,3,4,5}, n=5;

    RMergeSort(A,0,n-1);
    for(int i=0; i<10; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

}