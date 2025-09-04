#include <stdio.h>
void main()
{
    float a;
    printf("Enter a number");
    scanf("%f",&a);
    if(a/7==0)
    {
        printf("%f is divisible by 7\n",a);
    }
    else
    {
        printf("%f is not divisible by 7\n",a);
    }
}
