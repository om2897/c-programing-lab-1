#include<stdio.h>
void main()
{
    int number,digit,sum=0;
    printf("enter a number:");
    scanf("%d",&number);
    printf("Digits of the number:");
    if(number==0)
    {
        printf("0\n");
    }
    else
    {
        while(number>0)
        {
            digit=number%10;
            sum=sum+digit;
            number=number/10;
        }
    }
    printf("sum of digits:%d\n",sum);
}