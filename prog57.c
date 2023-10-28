#include<stdio.h>
void main()
{
    int a,b,c;
    printf("%enter the numbers :");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("max is %d ",a);
    }
    else if(b>a && b>c)
    {
        printf("max is %d ",b);
    }
    else if(c>a && c>b)
    {
        printf("max is %d ",c);
    }
    else
    {printf("invalid");}
}