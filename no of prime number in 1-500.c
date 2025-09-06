#include<stdio.h>
void main()
{
    int i,j,a;
    for(i=2;i<=500;i++)
    {
        int count=0;
        for(j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==1)
        {
            a++;
        }
    }
    printf("no of prime number between 1-500 are %d\n",a);
}
