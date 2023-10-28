#include<stdio.h>

int fibo();
int sumfibo();

void main()
{
    int n,i=0;
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    printf("The fibonacci series is : ");
   
    for(int i=1;i<=n;i++)
    {
        printf("%d ",fibo(i));
    }

    printf("\n");

    for(int i=0;i<n;i++)
    {
        if(fibo(i)%2==0)
        printf("even is %d \t",fibo(i));
        else
        printf("odd is %d\t",fibo(i));
    }

    printf("\n");

    printf("The sum of the terms of fibonacci series is %d",sumfibo(n));
}

int fibo(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return (fibo(n-1)+fibo(n-2));
}

int sumfibo(int n)
{
   /*static*/ int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+fibo(i);
    }
    return sum;
}