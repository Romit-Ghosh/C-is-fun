#include<stdio.h>
void main()
{
    int n,count=1;
    float x,y=1;
    printf("\nEnter the values of x and n:");
    scanf("%f%d",&x,&n);
    while(count<=n)
    {
        y=y*x;
        count++;
    }
    printf("x=%f amd n=%d, thus x to the power n is: %f",x,n,y);
}