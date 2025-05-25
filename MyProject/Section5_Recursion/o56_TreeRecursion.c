#include<stdio.h>

void fun(int n) 
{
    if(n>0)
    {
        printf("%d ", n);  //3 2 1 1 2 1 1
        fun(n-1);
        fun(n-1);
    }
}

int main() {
    fun(3);
}