#include<stdio.h>
void main()
{
    int n,i,sum=0;
    do
    {
        printf("no. :");
        scanf("%d",&n);
        sum+=n;
        

    }while(n!=0);
    printf("sum is %d",sum);
}