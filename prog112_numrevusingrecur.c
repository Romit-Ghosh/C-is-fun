#include<stdio.h>

int rev(int);

void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The reverse of the number is %d",rev(n));
}

int rev(int a)
{
    int r;
    static int s=0;
    if(a>0)
    {
        r=a%10;
        s=s*10+r;
        rev(a/10);
    }
    else
    return s;
}