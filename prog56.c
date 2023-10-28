#include<stdio.h>
void main()
{
    int n,i,j,a[50][50],b[50][50],sum[50][50],r,c;
    printf("\t\n Multidimensional array");
    printf("\n Enter the number of rows : ");
    scanf("%d",&r);
    printf("\n Enter the number of coloumns : ");
    scanf("%d",&c);
    printf("The elements in A are: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
             scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix A is :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
             printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("The elements of B are :");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
             scanf("%d",&b[i][j]);
        }
    }
    printf("The matrix B is :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    printf("The sum of the maxtrix is : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }

    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("The sum is %d\n",sum[i][j]);
        }
        printf("\n");
    }
}