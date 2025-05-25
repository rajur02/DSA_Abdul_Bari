#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int A[10];  //initializing array if the array is not pointer array and not created inside heap
    int size;
    int length;
};

void Display(struct Array arr) 
{
    int i;
    printf("\nElements are:\n");
    for(i=0; i<arr.length; i++)
        printf("%d ", arr.A[i]);
}

void Reverse(struct Array *arr) {

    int *B;
    int i, j;
    B =(int *)malloc(arr->length*sizeof(int));
    for(i=arr->length-1, j=0; i>=0; i--,j++)
        B[j]=arr->A[i];
    for(i=0; i<arr->length; i++)
        arr->A[i]=B[i];
}

void swap(int *x, int *y) {

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Reverse2(struct Array *arr) {

    int i, j;
    for(i=0, j=arr->length-1; i<j; i++, j--) {
        swap(&arr->A[i], &arr->A[j]);
    }
}

void LeftShift(struct Array *arr) {

    int i;
    for(i=0; i<arr->length; i++) {
        arr->A[i]=arr->A[i+1];
    }
}

void LeftRotate(struct Array *arr) {

    int i;
    int first = arr->A[0];
    for(i=0; i<arr->length; i++) {
        arr->A[i]=arr->A[i+1];
    }
    arr->A[arr->length-1]=first;
}

int main() 
{
    struct Array arr = {{2,3,4,5,6}, 10, 5};  //initializing array if the array is not pointer array and not created inside heap

    Reverse(&arr);
    Display(arr);
    Reverse2(&arr);
    Display(arr);
    // LeftShift(&arr);
    LeftRotate(&arr);
    Display(arr);

    return 0;
    
}