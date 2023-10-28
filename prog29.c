#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("enter the number :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum+=i;
    }
    printf("the sum of the numbers is:%d",sum);
}