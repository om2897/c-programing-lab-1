#include<stdio.h>
void main()
{
    int i,n,c;
    c=5;
    for (i=1;i<=5;i++)
    {
        for(n=c;n>=c;n--)
        {
            
            printf("%d %d\n",i,n);
        }
        c--;
    }
}