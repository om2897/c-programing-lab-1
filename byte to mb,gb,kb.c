#include<stdio.h>
void main ()
{
    float a,b,c,d;
    printf("enter value in byte");
    scanf("%f",&a);
    b=a/1000;
    c=b/1000;
    d=c/1000;
    printf("%fKB\n",b);
    printf("%fMB\n",c);
    printf("%fGB\n",d);

}