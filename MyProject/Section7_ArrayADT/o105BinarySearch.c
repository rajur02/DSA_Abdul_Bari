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

int BinarySearch(struct Array arr, int key) {

    int l, h, mid;
    l=0;
    h=arr.length-1;
    while (l<=h)
    {
        mid = (l+h)/2;
        if(key == arr.A[mid])
            return mid;
        else if(key < arr.A[mid])
            h = mid-1;
        else
            l=mid+1;
    }
    
    return -1;
}

int RBinSearch(int a[], int l, int h, int key) {

    int mid;
    if(l<=h) {
        mid = (l+h)/2;
        if(key==a[mid])
            return mid;
        else if (key < a[mid])
            return RBinSearch(a, l, mid-1, key);
        else
            return RBinSearch(a, mid+1, h, key);
    }
    return -1;
}

int main() 
{
    struct Array arr = {{2,3,4,5,6}, 10, 5};  //initializing array if the array is not pointer array and not created inside heap

    printf("Binary search index is %d\n", BinarySearch(arr, 15));
    printf("Recursive Binary search index is %d\n", RBinSearch(arr.A, 0, arr.length, 5));
    Display(arr);

    return 0;
    
}