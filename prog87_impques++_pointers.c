#include<stdio.h>
void main()
{
    int a[]={10,11,-1,56,67,5,4};
    int *p=a,*q;
    printf("%d\n",*p);
    printf("%d %d %d\n",(*p)++,*p++,*p++);  /*  (*p)++=(-1)++
                                                    =0 . so a[2]=-1 will be replaced by 0. */
    q=p+3;
    printf("%d\n",*q-3);
    printf("%d\n",*--p+5);
    printf("%d\n",*p+*q);
}