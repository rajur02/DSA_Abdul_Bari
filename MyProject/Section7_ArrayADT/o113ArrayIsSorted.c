#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int A[10];  //initializing array if the array is not pointer array and not created inside heap
    int size;
    int length;
};

//Insert an element in sorted array
void InsertSort(struct Array *arr, int x) {

    int i = arr->length - 1;
    if(arr->length == arr->size)
        return;
    while(i>=0 && arr->A[i]>x) {
        arr->A[i+1] = arr->A[i];
        i--;
    }
    arr->A[i+1] = x;
    arr->length++;
}

//check if the array is sorted or not
int isSorted(struct Array arr) {

    int i;
    for(i=0; i<arr.length-1; i++) {
        if(arr.A[i] > arr.A[i+1])
            return 0;
    }
    return 1;
}

//Rearranging positive and negative values
void Rearrange(struct Array *arr) {
    int i=0, j=arr->length-1;
    while(i<j) {
        while(arr->A[i]<0) i++;
        while(arr->A[j]>=0) j--;
        if(i<j) {
            int temp = arr->A[i];
            arr->A[i] = arr->A[j];
            arr->A[j] = temp;
        }
    }
}

void Display(struct Array arr) {
    int i;
    printf("\nElements are:\n");
    for(i=0; i<arr.length; i++)
        printf("%d ", arr.A[i]);
}

int main() {

    //struct Array arr = {{2, 3, 5, 10, 15}, 10, 5}; // Initializing the array with some prime numbers
    //InsertSort(&arr, 12);
    //printf("%d", isSorted(arr));
    // Display(arr);
    struct Array arr1 = {{2, -3, 25, 10, -15, -7}, 10, 6};
    Rearrange(&arr1);
    Display(arr1); 
}