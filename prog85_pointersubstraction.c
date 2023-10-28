#include<stdio.h>
void main()
{
    int a[]={2,4,3,0,-7};
    int *p=a;
    int *q=&a[3];
    printf("q-p =%d\n",q-p);
    printf("p-q=%d\n",p-q);
    printf("value is %d\n",*q);
    q=q-2;
    printf("value=%d\n",*q);
    p=p+2;
    printf("value=%d\n",*p);
    printf("q-p=%d\n",q-p);
    q=q-2;
    printf("value=%d\n",*q); //any garbage value
}