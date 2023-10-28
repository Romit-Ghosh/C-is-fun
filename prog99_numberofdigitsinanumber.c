#include<stdio.h>
void main()
{
    int count=0,n,rem=0,i=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    /*while(n)
    {
        rem=n%10;
        n=n/10;
        count++;
        i++;
    }*/
    for(int i=0;n;i++)
    {
       rem=n%10;
        n=n/10;
        count++; 
    }
    printf("The entered number is a %d digited number\n",count);
}