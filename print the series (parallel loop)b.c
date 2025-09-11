#include<stdio.h>
void main()
{
    int i,n,c,a;
    c=5;
    a=5;
    for(i=1;i<=3;i++)
    {
        for(n=c;n>=(c-1);n--)
        {
            printf("%d %d\n",i,a);
        }
        c--;
        a--;
    }
}