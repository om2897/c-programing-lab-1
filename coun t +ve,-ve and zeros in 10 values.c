#include<stdio.h>
void main()
{
    int i,a,plus,minus,zeros;
    plus=0;
    minus=0;
    zeros=0;
    for(i=1;i<=10;i++)
    {
        printf("enter %d value = ",i);
        scanf("%d",&a);
        if(a>0)
            plus++;
        else if(a<0)
            minus++;
        else
            zeros++;
    }
    printf("positive values = %d\n",plus);
    printf("negative values = %d\n",minus);
    printf("zeros = %d\n",zeros);

}