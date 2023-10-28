#include<stdio.h>
void main()
{
    int a1,a2,a3;
    printf("enter age of ram :\nenter age of shyam :\nenter age of ajay :");
    scanf("%d%d%d",&a1,&a2,&a3);
    if(a1<a2)
    {
        if(a1<a3)
        {
            printf("youngest is ram");
        }
        else if(a2<a1 && a2<a3)
        {
            printf("shyam is youngest");
        }
    }
    else if(a3<a1 && a3<a2)
    {
        printf("ajay is youngest");
    }
    else
    {
        printf("invalid");
    }
}