#include<stdio.h>

void fun1(int n)
{
    if(n>0)
    {
        printf("%d",n);  //321
        fun1(n-1);
    }
}

void fun2(int n)
{
    if(n>0)
    {
        fun2(n-1);
        printf("%d",n);  //123
    }
}

int main()
{
    int x=3;
    fun1(3);
    printf("\n");
    fun2(3);
}