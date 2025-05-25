#include<stdio.h>

int x;  //Global variable

int fun(int n)
{
    //static int x=0;   //static variable
    if(n>0)
    {
        x++;
        //return fun(n-1)+n; //15
        return fun(n-1)+x;  //25 for both static and global variable
    }
    return 0;
}

int main()
{
    int r;
    r=fun(5);
    printf("%d\n", r);

    r=fun(5);
    printf("%d\n", r);
}