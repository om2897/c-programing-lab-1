#include<stdio.h>
void main()
{
    int i,j,sum=0;
    for(i=2;i<=500;i++)
    {
        int flag=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            sum=sum+i;
        }
    }
    printf("Sum of prime numbers between 1 to 500 is: %d",sum);
}   