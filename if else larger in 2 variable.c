#include<stdio.h>

void main ()
{
    float a,b;
    printf("enter two values\n");
    printf("Enter no. 1 = ");
    scanf("%f",&a);
    printf("Enter no. 2 = ");
    scanf("%f",&b);
    if (a>b)
    {
        printf("No. 1 has larger value\n");
        printf("No. 2 has smaller value\n");

    }
    else
    {
        printf("No. 2 has larger value\n");
        printf("No. 1 has smaller value\n");
    }
    

}