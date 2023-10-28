#include<stdio.h>
void main()
{
    int i=1,n,sum=0;
    float avg;
    do
    {
        printf("enter the number :");
        scanf("%d",&n);
        sum+=i;
        i++;
    }
    while(i<=n);
    printf("sum is %d",sum);
    avg=sum/n;
    printf("avg is %d",avg);
}