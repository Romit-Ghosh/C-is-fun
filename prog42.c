#include<stdio.h>
void main()
{
    int a[9]={34,56,54,32,67,89,90,32,21},n;
    printf("The elements of the array are :");
    for(int i=0;i<9;i++)
    {
        printf("  %d",a[i]);  //original order
    }
    printf("\n");
    printf("The reverse order is:");  //reverse order
    for(int i=8;i>=0;i--)
    {
        printf("\t%d",a[i]);
    }
}