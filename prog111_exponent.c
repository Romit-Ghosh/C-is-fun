#include<stdio.h>

int expo(int,int);

void main()
{
    int e,b;
    printf("Enter the base : ");
    scanf("%d",&b);
    printf("Enter the exponent : ");
    scanf("%d",&e);
    printf("power(%d^%d) = %d\n",b,e,expo(b,e));
}

int expo(int b,int e)
{
    if(e==0)
    return 1;
    else 
    return b*expo(b,e-1);
}