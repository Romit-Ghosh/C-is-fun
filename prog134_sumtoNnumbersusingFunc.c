/*Find the solutions by using recursive functions
User input one positive integer n, Create a function to find sum of all numbers upto n.
Sum = n+(n-1)+(n-2)... +2+1+0*/

#include<stdio.h>
int sum();

void main()
{
    int n;
    printf("Enter number of terms  : ");
    scanf("%d",&n);
    printf("The sum to %d terms is %d",n,sum(n));
}

int sum(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return n+sum(n-1);
}