#include<stdio.h>
void main()
{
    int i,n,factorial;
    factorial=1;
    printf("Enter the value of n:- ");
    scanf("%d",&n);
    for (i=n; i>=1;i--)
    {
        factorial=factorial*i;
    }
    printf("factorial of %d = %d",n,factorial);
}