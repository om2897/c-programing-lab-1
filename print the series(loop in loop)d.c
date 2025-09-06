#include<stdio.h>
void main()
{
    int i,n;
    for (i=5;i>=3;i--)
    {
        for(n=1;n<=2;n++)
        {
            printf("%d %d\n",i,n);
        }
    }
}