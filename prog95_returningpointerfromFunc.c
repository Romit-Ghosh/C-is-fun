#include<stdio.h>

int *returnpointer(int []); // '*' means it will return a pointer of datatype integer
void main()
{
    int *p;
    int a[]={1,2,3,4,5};
    p=returnpointer(a);
    printf("%d\n",*p);
}

int *returnpointer(int a[])  // or int *a can be written
{
    a=a+2;
    return a;
}