#include<stdio.h>
void main()
{
    float a1,a2,a3,sum;
    printf("enter the three angles of triangle :");
    scanf("%f%f%f",&a1,&a2,&a3);
    sum=a1+a2+a3;
    if(sum==180)
    {
        printf("it is valid triangle");
    }
    else{
        printf("it is not valid triangle");
    }
}