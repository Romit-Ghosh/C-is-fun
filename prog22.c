#include<stdio.h>
#include<conio.h>
int main()
{
    int n,num;
    printf("enter a number : ");
    scanf("%d",&n);
    num=n;
    /*if(num<0)   //1st method
    {
        num=(-1)*num;   
    }
     printf("The absolute value of %d is %d",n,num);*/


     //2nd method
     num= abs(num);
     printf("The absolute value of %d is %d",n,num);
     return 0;
}