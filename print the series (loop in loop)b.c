#include<stdio.h>
void main()
{
    int i,n;
    for (i=1;i<=3;i++)
    {
        for(n=1;n<=3;n++)
        {
            if(i>=n)
            {
            printf("%d %d\n",i,n);
            }
        }
    }
}