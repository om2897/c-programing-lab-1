#include <stdio.h>
void main()
{
    float a,b,c,d;
    printf("Enter marks of sub-1=\n");
    scanf("%f",&a);
    printf("Enter marks of sub-2=\n");
    scanf("%f",&b);
    printf("Enter marks of sub-3=\n");
    scanf("%f",&c);
    d=(a+b+c)/3;
    if(a&&b&&c>35&&d>=70)
    {
        printf("avg of marks=%f\n",d);
        printf("Distinction\n");
    }
    else if(a&&b&&c>35&&d>=60)
    {
        printf("avg of marks=%f\n",d);
        printf("first\n");
    }
     else if(a&&b&&c>35&&d>=50)
    {
        printf("avg of marks=%f\n",d);
        printf("second\n");
    }
     else if(a&&b&&c>35&&d>=35)
    {
        printf("avg of marks=%f\n",d);
        printf("third\n");
    }
    else
    {
        printf("fail\n");
    }

}