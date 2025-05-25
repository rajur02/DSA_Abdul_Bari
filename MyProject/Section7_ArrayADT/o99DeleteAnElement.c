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
    printf("Elements are\n");
    for(i=0; i<arr.length; i++)
        printf("%d ", arr.A[i]);
}

int Delete(struct Array *arr, int index) {

    int x = 0;
    int i;
    if(index >= 0 && index <= arr->length)
    {
        x = arr->A[index];
        for(i=index; i<arr->length-1; i++)
            arr->A[i] = arr->A[i+1];
        arr->length--;
        return x;
    }
    return 0;
}

int main() 
{
    struct Array arr = {{2,3,4,5,6}, 10, 5};  //initializing array if the array is not pointer array and not created inside heap

    //Append(&arr, 10);
    // Insert(&arr, 0, 10);
    printf("Deleted element is %d\n", Delete(&arr, 3));
    Display(arr);

    return 0;
    
}