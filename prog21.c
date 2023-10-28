#include<stdio.h>
void main()
{
    float cp,sp,loss,profit;
    printf("Enter the cost price and selling price : ");
    scanf("%f%f",&cp,&sp);
    profit=sp-cp;
    loss=cp-sp;
    if(sp>cp)
    {
        printf("it has made profit\n");
        printf("He has made a profit of :%f",profit);
    }
    else if(cp>sp)
    {
        printf("he has incurred loss\n");
        printf("He has incurred a loss of :%f",loss);
    }
    else
    {
        printf("invalid!!");
    }   
}