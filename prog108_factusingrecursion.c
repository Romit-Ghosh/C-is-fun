#include<stdio.h>

int fact1(int);
int fact2(int);

void main()
{
    int n;
    printf("Enter a number to find the factorial of : ");
    scanf("%d",&n);
    printf("The factorial of %d is %d\n",n,fact1(n));
}

int fact1(int a)
{
    if (a<=1)
    {
        return 1;
    }
    else  
    return a*fact2(a-1);
}

int fact2(int a)
{
    if (a<=1)
    {
        return 1;
    }
    else  
    return a*fact1(a-1);
}