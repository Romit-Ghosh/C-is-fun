#include<stdio.h>

void f(int *,int *);

int i=0,j=1;

int main()
{
    f(&i,&j);
    printf("%d %d\n",i,j);
    getchar();
    return 0;
}

void f(int *p,int *q)
{
    p=q;
    *p=2;
}