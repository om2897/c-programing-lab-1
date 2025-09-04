#include<stdio.h>
void main()
{
    int i,n,sum;
    sum=0;
    printf("Enter the value of n:- ");
    scanf("%d",&n);
    for (i=2; i<=n;i+=2)
    {
        sum=n*(n+1);
    }
    printf("Sum of %d natural number = %d",n,sum);
}