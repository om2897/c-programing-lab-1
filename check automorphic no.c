#include<stdio.h>
void main()
{
    int n,s,r;
    printf("Enter a number:");
    scanf("%d",&n);
    s=n*n;
    r=s%10;
    if(r==n)
    {
        printf("Automorphic number");
    }
    else
    {
        printf("Not an Automorphic number");
    }
}