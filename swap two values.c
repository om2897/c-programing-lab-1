#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    c=b;
    b=a;
    a=c;
    printf("swapped a=%d\n",a);
    printf("swapped b=%d\n",b);
}