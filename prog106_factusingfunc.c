#include<stdio.h>

 int fact(int);

void main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    fact(n);
    printf("Factorial of %d is = %d ",n,fact(n));
}

int fact(int a)
{
    int f=1;
    for(int i=1;i<=a;i++)
    {
        f=f*i;
    }
    return f;
}