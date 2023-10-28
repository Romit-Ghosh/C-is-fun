#include<stdio.h>

int sum(int,int);

void main()
{
    int s=0;
    int (*ptr)(int ,int)=&sum;  // or sum
    s=(*ptr)(6,6);  // or ptr
    printf("%d\n",s);
}

int sum(int a,int b)
{
    return a+b
;}