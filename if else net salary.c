#include <stdio.h>
void main ()
{
    float n,g,a,d;
    printf("Enter gross salary = ");
    scanf("%f",&g);
    if(g>10000)
    {
        a=g*0.1;
        d=g*0.03;
        n=g+a-d;
        printf("the net salary = %f",n);
    }
    else if(g>5000)
    {
        a=g*0.07;
        d=g*0.02;
        n=g+a-d;
        printf("the net salary = %f",n);
    }

}