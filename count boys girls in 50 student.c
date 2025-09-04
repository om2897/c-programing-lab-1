#include<stdio.h>
void main()
{
    int i,boys,girls;
    char j,f,m;
    boys=0;
    girls=0;
    for(i=1;i<=50;i++)
    {
        printf("enter %d student\n",i);
        scanf(" %c",&j);
        if(j=='m')
        {
            boys++;
        }
        else if(j=='f')
        {
            girls++;
        }
    }
    printf("number of boys:-%d\n",boys);
    printf("number of girls:-%d\n",girls);

}