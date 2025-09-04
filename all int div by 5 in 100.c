#include<stdio.h>
void main()
{
    int i;
    printf("all int div by 5 in 100\n");
    for(i=1;i<=100;i++)
    {
        if(i%5==0)
        {
            printf("%d\n",i);
        }
    }
}