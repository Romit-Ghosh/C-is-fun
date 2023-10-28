#include<stdio.h>
void main()
{
    int n;
    int a[100];
    printf("Enter the totals numbers to be entered :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;a[i];i++)
    {
        if(a[i]%2==0)
        printf("%d is an even number\n",a[i]);
        else
        printf("%d is an odd number\n",a[i]);
    }
}