//selection sort
#include<stdio.h>
void main()
{
    int a[6],n,min,i,j,temp;
    printf("Enter the no of elements in the array :");
    scanf("%d",&n);
    printf("Enter the elements in the array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
           temp=a[i];
           a[i]=a[min];
           a[min]=temp;
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
}