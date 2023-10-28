#include<stdio.h>
void main()
{
    int i,n,a[30],smallest;
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
    printf("the elememts are :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    smallest=a[0];
    for(i=0;i<n;i++)
    {
       if(a[i]<smallest)
    {
        smallest=a[i];
    }
    }
    printf("the smallest is %d",smallest);

}