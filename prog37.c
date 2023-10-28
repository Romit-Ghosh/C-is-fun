#include<stdio.h>
void main()
{
    int num1=0,num2=1,fib,i,n;
    printf("\nEnter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n-2;i++)
    {
        fib=num1+num2;
        num1=num2;
        num2=fib;
    }
    printf("The nth fibonacci series %d %d for n=%d is: %d ",num1,num2,n,fib);
}