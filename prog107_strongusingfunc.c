#include<stdio.h>

 void strong(int);

void main()
{
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    strong(n);
}

void strong(int a)
{
    int rem;
    int f=1,sum=0;
    for(int i=1;a;i++)
    {
        rem=a%10;
        a=a/10;
        for(int j=1;j<=rem;j++)
        {
            f=f*j;
            sum=sum+f;
        }
    }
    if(sum==a)
    {
        printf("%d is a strong number",a);
    }
    else
    {
        printf("%d is not a strong number",a);
    }
}