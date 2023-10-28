#include<stdio.h>
void main()
{
    int i,n,a[30],max;
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
    printf("the elememts are :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<n;i++)
    {
       if(a[i]>max)
    {
        max=a[i];
    }
    }
    printf("the maximum is %d",max);

}