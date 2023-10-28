#include<stdio.h>

int prod(int,int);

void main()
{
    int a,b;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2st number : ");
    scanf("%d",&b);
    printf("The product of 2 numbers is : %d\n",prod(a,b));
}

int prod(int a,int b)
{
    if (a==0||b==0)
    return 0;
    else if(a<b)
    return prod(b,a);
    else
    return a+prod(a,b-1);
}