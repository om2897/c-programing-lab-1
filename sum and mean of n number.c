#include<stdio.h>
void main()
{
    int i,sum,mean,a,n;
    sum=0;
    printf("enter how many values you want to enter : ");
    scanf("%d",&n);

    printf("enter n values :\n");

    for(i=1;i<=n;i++)
    {
        printf("%d value = ",i);
        scanf("%d",&a);

        sum=sum+a;
    }

    mean=sum/n;

    printf("mean of n values = %d\n",mean);
    printf("sum of n values = %d\n",sum);
}