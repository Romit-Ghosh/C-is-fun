//insertion sort
#include<stdio.h>
void main()
{
    int n,a[100],i,j,temp;
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
    printf("\nEnter the elements in the array : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
        
}