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

int Get(struct Array arr, int index) {

    if(index >= 0 && index < arr.length)
        return arr.A[index];

    return -1;
}

void Set(struct Array *arr, int index, int x) {

    if(index >= 0 && index < arr->length)
        arr->A[index] = x;
}

int Max(struct Array arr) {

    int max = arr.A[0];
    for(int i=0; i<arr.length; i++) {

        if(arr.A[i]>max)
            max = arr.A[i];
    }
    return max;
}

int Min(struct Array arr) {

    int min = arr.A[0];
    for(int i=0; i<arr.length; i++) {

        if(arr.A[i]<min)
            min = arr.A[i];
    }
    return min;
}

int Sum(struct Array arr) {

    int sum = 0;
    for(int i=0; i<arr.length; i++) {
        sum+=arr.A[i];
    }
    return sum;
}

float Avg(struct Array arr) {

    return (float)Sum(arr)/arr.length;
}

int main() 
{
    struct Array arr = {{2,3,4,5,6}, 10, 5};  //initializing array if the array is not pointer array and not created inside heap

    printf("Get(x) %d\n", Get(arr, 9));
    // Set(&arr, 0, 5);
    printf("Max(x) %d\n", Max(arr));
    printf("Min(x) %d\n", Min(arr));
    printf("Sum(x) %d\n", Sum(arr));
    printf("Average(x) %f\n", Avg(arr));
    Display(arr);

    return 0;
    
}