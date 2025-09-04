#include <stdio.h>
void main ()
{
    float n,g,d;
    printf("Enter gross sale = ");
    scanf("%f",&g);
    if(g>20000)
    {
        d=g*0.15;
        n=g-d;
        printf("the net salary = %f",n);
    }
    else if(g>5000)
    {
        d=g*0.1;
        n=g-d;
        printf("the net salary = %f",n);
    }
    else
    {
        d=g*0.05;
        n=g-d;
        printf("the net salary = %f",n);
    }

}