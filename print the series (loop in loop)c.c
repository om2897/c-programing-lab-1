#include<stdio.h>
void main()
{
    int i,n,j;
    for (i=1;i<=2;i++)
    {
        for(n=1;n<=2;n++)
        {
            for(j=1;j<=2;j++)
            {
            printf("%d %d %d\n",i,n,j);
            }
        }
    }
}