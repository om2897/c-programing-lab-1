#include<stdio.h>
void main()
{
    int i,sum=0;
    printf("sum of all int from 1 to 100 div by 3\n");
    for(i=1;i<=100;i++)
    {
        if(i%3==0)
        {
            sum=sum+i;
        }
    }
    printf("sum=%d",sum);
}