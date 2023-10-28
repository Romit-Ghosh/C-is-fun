#include<stdio.h>
void main()
{
    int a[]={3,2,67,0,56};
    int *p=a;
    p++;
    printf("%d\n",*p);
    printf("%d\n",*p++);
    printf("%d\n",*++p);
    printf("%d %d\n",*--p,*--p);
    printf("%d\n",*p);
    printf("%d\n",*p++);
    printf("%d\n",*p);
}