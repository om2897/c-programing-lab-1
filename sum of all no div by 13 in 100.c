#include<stdio.h>
void main()
{
    int i,sum;
    sum=0;
    for(i=1;i<=100;i++)
    {
        if(i%13==0)
        {
            sum=sum+i;
            printf("Sum of all numbers divisible by 13 from 1 to 100 is %d\n",sum);
        }
    }
}