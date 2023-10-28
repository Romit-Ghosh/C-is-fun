#include<stdio.h>
int sum();

void main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);
    printf("Sum of the number is %d",sum(n));
}

int sum(int a)
{
    int s=0,rem;
    for(int i=1;a;i++)
    {
        if(a>0)
        {
            rem=a%10;
            s=s+rem;
            a=a/10;
        }
    }
    return s;
}