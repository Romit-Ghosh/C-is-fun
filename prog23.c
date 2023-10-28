#include<stdio.h>
void main()
{
    float a,b,c;
    printf("enter the three sides of triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && a==c && b==c)
    {
        printf("the triangle is equilateral");
    }
    else if(a!=b && a!=c && b!=c)
    {
        printf("the triangle is scalene");
    }
    else if(a==b && a!=c && b!=c)
    {
        printf("the triangle is isosceles ");
    }
    else if(a==90)
    {
        printf("it is right angled triangle");
    }
    else{
        printf("invalid input");
    }
}