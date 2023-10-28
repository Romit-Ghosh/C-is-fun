#include<stdio.h>
void main()
{
    int n,a[10],i,search;
    printf("enter no. of elements : ");
    scanf("%d",&n);
    printf("\nenter the array elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nenter number to be searched : ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
         if(search==a[i])
         {
            printf("\nsearched element is found in %d array index",i);
         }
    }
}