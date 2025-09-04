#include<stdio.h>
void main()
{
    int number, orignalnumber,reversednumber=0,reminder;
    printf("enter a number:");
    scanf("%d",&number);
    orignalnumber=number;
    while(number !=0)
    {
        reminder=number%10;
        reversednumber=reversednumber*10+reminder;
        number=number/10;
    }
    if(orignalnumber==reversednumber)\
    {
        printf("the number is polindrome\n");
    }
    else
    {
        printf("number is not polindrome\n");
    }
}