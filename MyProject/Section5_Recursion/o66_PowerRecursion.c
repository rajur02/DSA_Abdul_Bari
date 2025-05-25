#include<stdio.h>

//using recursion
int power(int m, int n)
{
    if(n==0)
        return 1;
    return power(m, n-1)*m;
}

//By reducing number of multiplication
int power1(int m, int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
        return power1(m*m, n/2);
    else    
        return m*power1(m*m, (n-1)/2);
}

int main()
{
    int r=power(3,4);
    printf("%d\n", r);
    printf("%d\n", power1(2,9
    ));
}