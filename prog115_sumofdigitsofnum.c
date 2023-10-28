#include<stdio.h>

int sum(int);

void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The sum of the digits is %d",sum(n));
}

int sum(int a)
{
    int r;
    static int s=0;
    if(a>0)
    {
       r=a%10;
       s=s+r;
       sum(a/10);
    }
    else
    return s;
}