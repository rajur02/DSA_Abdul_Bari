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
    printf("Elements are:\n");
    for(i=0; i<arr.length; i++)
        printf("%d ", arr.A[i]);
}

void swap(int *x, int *y) {

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int LinarSearch(struct Array *arr, int key) {

    for(int i=0; i<arr->length; i++) {

        if(key==arr->A[i])
        {
            // swap(&arr->A[i], &arr->A[i-1]); //transposition
            swap(&arr->A[i], &arr->A[0]); //move to head
            return i;
        }
    }
    return -1;
}

int main() 
{
    struct Array arr = {{2,3,4,5,6}, 10, 5};  //initializing array if the array is not pointer array and not created inside heap

    printf("Linear serach index is %d\n", LinarSearch(&arr, 5));
    Display(arr);

    return 0;
    
}