#include<stdio.h>
void main()
{
    int i,sum,mean,a;
    sum=0;

    printf("enter ten values :\n");

    for(i=1;i<=10;i++)
    {
        printf("%d value = ",i);
        scanf("%d",&a);

        sum=sum+a;
    }

    mean=sum/10;

    printf("mean of 10 values = %d\n",mean);
    printf("sum of 10 values = %d\n",sum);
}