#include<stdio.h>
void main()
{
    int a=10,b=9,c;
    int *p,*q;
    p=&a; q=&b;
    c=*p;
    printf("Value of a=%d\n",a);
    printf("Value of a=%d\n",*p);
    printf("adress of a is:%x\n",&a);
    printf("address of p is %x\n",&p);
    printf("c=%d",c);
}