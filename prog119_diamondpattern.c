#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter number of rows : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf(" ");
        }

        for(int r=1;r<=(2*i-1);r++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int b=n-1;b>=1;b--)
    {
        for(int a=1;a<=n-b;a++)
        {
            printf(" ");
        }

        for(int k=1;k<=(2*b-1);k++)
        {
            printf("*");
        }
        printf("\n");
    }
}