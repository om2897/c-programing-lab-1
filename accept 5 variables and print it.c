#include <stdio.h>
void main()
{
    int a[5],i;
    printf("enter 5 values");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
}