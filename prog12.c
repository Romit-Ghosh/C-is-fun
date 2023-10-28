#include<stdio.h>
void main()
{
    int c,d,temp;
    printf("Enter the content of c and d : ");
    scanf("%d%d",&c,&d);
    temp=c;
    c=d;
    d=temp;
    printf("The interchanged values of c and d is : %d,%d",c,d);
}