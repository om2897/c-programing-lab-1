#include<stdio.h>

void main ()
{
    float a,b,c;
    printf("enter two values\n");
    printf("Enter no. 1 = ");
    scanf("%f",&a);
    printf("Enter no. 2 = ");
    scanf("%f",&b);
    printf("Enter no. 3 = ");
    scanf("%f",c);
    if (a>b&&a>c&&b>c)
    {
        printf("No. 1 has larger value\n");
        printf("No. 2 has smaller value\n");

    }
    else if(b>c&&b>a&&c>a)
    {
        printf("No. 2 has larger value\n");
        printf("No. 3 has smaller value\n");
    }
    else if(c>a&&c>b&&b>a)
    {
        printf("No. 3 has larger value\n");
        printf("No. 2 has smaller value\n");
    }
     else if(c>a&&c>b&&a>b)
    {
        printf("No. 3 has larger value\n");
        printf("No. 1 has smaller value\n");
    }
    else if(b>c&&b>a&&a>c)
    {
        printf("No. 2 has larger value\n");
        printf("No. 1 has smaller value\n");
    }
    else if(a>c&&a>b&&c>b)
    {
        printf("No. 1 has larger value\n");
        printf("No. 3 has smaller value\n");
    }

}