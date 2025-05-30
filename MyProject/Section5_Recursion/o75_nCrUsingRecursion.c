#include<stdio.h>

int fact(int n)
{
    if(n==0) return 1;
    return fact(n-1)*n;
}

//using simple method
int nCr(int n, int r)
{
    int num, den;
    num=fact(n);
    den=fact(r)*fact(n-r);

    return num/den;
}

//using Recursion/PAscal's Reiangle
int NCR(int n, int r)
{
    if(n==r || r==0)
        return 1;
    return NCR(n-1, r-1)+NCR(n-1,r);
}

int main()
{
    printf("%d\n", nCr(5,2));
    printf("%d\n", NCR(5,2));
}