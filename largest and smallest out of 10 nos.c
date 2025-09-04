#include<stdio.h>
void main()
{
    int i,largest,smallest,a;
    largest=a;
    smallest=a;
    for(i=1;i<=10;i++)
    {
        printf("enter %d value = ",i);
        scanf("%d",&a);
        if(a>largest)
            largest=a;
        if(a<smallest)   
            smallest=a;
    }
    printf("largest value = %d\n",largest);
    printf("smallest value = %d\n",smallest);

}