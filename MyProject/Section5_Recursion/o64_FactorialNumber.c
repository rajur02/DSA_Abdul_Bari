#include<stdio.h>

//using recursion
int fact(int n)
{
    if(n==0)
        return 1;
    return fact(n-1)*n;
}

//using Iterative sum
int Ifact(int n)
{
    int i, f=1;
    for(i=1; i<=n; ++i)
        f*=i;
    return f;
}

int main()
{
    int r, n=5;
    r=fact(5);
    printf("%d\n",r);
    printf("%d\n",Ifact(5));
}