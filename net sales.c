#include<stdio.h>
int main ()
{
    float n,g,d;
    printf("enter the gross sales");
    scanf("%f",&g);
    d=g*10/100;
    n=g-d;
    printf("net sales=%f",n);
}