#include<stdio.h>
void main()
{
    int n,r,sum=0,temp;
    printf("enter a number");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp==sum)
        printf("it is an armstrong number");
        else
        printf("it is not an armstrong number");    
}