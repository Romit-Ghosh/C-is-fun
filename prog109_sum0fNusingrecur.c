#include<stdio.h>

int sum(int);

void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The sum of first %d natural number is %d",n,sum(n));
}

int sum(int n)
{
    if (n==0)
    return 0;
    else
    return n+sum(n-1);
}