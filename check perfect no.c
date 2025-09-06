#include<stdio.h>
void main()
{
    int n,i,a;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            a=a+i;
        }
    }
    if(a==n)
        printf("it is a perfect number");
    else
        printf("it is not a perfect number");
}