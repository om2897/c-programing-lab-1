#include<stdio.h>
void main()
{
    int factorial(int);
    printf("%d",factorial(5));
}
int factorial(int n)
{
    if(n==0)
        return 1;
    else
        return (n*factorial(n-1));
}
