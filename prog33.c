#include<stdio.h>
void main()
{
    int i=1,a,b,c;
    printf("Armstrong numbers between 1 & 500 are:\n");
    while(i<=500)
    {
        a=i%10;
        b=(i/10)%10;
        c=(i/100)%10;
        if((a*a*a)+(b*b*b)+(c*c*c)==i)
        printf("%d\n",i);
        i++;
    }
}