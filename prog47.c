#include<stdio.h>
void main()
{
    int n;
    int a=0;
    printf("enter the number of rows :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
       for(int j=1;j<=i;j++)
       {
        printf("  %d",a);
        a++;
       }
       a=0;
       printf("\n");
    }
}