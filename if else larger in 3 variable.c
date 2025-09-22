#include<stdio.h>

void main ()
{
    int a,b,c,largest,smallest;
    printf("Enter three values\n");
    printf("Enter no. 1 = ");
    scanf("%d",&a);
    printf("Enter no. 2 = ");
    scanf("%d",&b);
    printf("Enter no. 3 = ");
    scanf("%d",&c);
    if(a>=b&&a>=c)
    {
        largest=a;
    }
    else if(b>=a&&b>=c)
    {
        largest=b;
    }
    else
    {
        largest=c;
    }
     if(a<=b&&a<=c)
    {
        smallest=a;
    }
    else if(b<=a&&b<=c)
    {
        smallest=b;
    }
    else
    {
        smallest=c;
    }
    printf("%d id the largest number\n",largest);
    printf("%d id the smallest number\n",smallest);
}
