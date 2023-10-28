#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    
    (n%4==0 || n%400==0)?printf("It is a leap year"):printf("It is not a leap year");
}