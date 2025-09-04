#include<stdio.h>
void main()
{
    int number,count=0;
    printf("enter a number:");
    scanf("%d",&number);
    if(number==0)
    {
        count=1;
    }
    else
    {
        while(number>0)
        {
            count++;
            number=number/10;
        }
    }
    printf("Number of digits:%d\n",count);
}
