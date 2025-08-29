#include<stdio.h>
void main()
{
    int a,b,c,avg,total;
    printf("Enter marks of sub A:-");
    scanf("%d",&a);
    printf("Enter marks of sub B:-");
    scanf("%d",&b);
    printf("Enter marks of sub C:-");
    scanf("%d",&c);
    total=a+b+c;
    avg=total/3;
    printf("total marka:-%d\n",total);
    printf("Average marks:-%d\n",avg);
}