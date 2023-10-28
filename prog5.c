#include<stdio.h>
void main()
{
    int farhen,centi;
    printf("enter temperature in farenheight :");
    scanf("%d",&farhen);
    centi= (farhen-32)*5/9;
    printf("tempereature in centigrate is : %d",centi);
}