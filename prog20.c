#include<stdio.h>
void main()
{
    int area,peri,l,b;
    printf("enter the length and breadth of the rectangle :");
    scanf("%d%d",&l,&b);
    area=l*b;
    peri=2*(l+b);
    if(area>peri)
    {
        printf("area of rectangle is greater");
    }
    else{
        printf("perimeter is greater");
    }
}