#include<stdio.h>

//using recursion
int sum(int n)
{
    if(n==0)
        return 0;
    return sum(n-1)+n;
}

//using Iterative sum
int Isum(int n)
{
    int i, s=0;
    for(i=1; i<=n; ++i)
        s=s+i;
    return s;
}

int main()
{
    int r, n=5;
    r=sum(5);
    printf("%d\n",r);
    printf("%d\n",Isum(5));
    //using the formula
    int sum =n*(n+1)/2;
    printf("%d\n", sum);
}