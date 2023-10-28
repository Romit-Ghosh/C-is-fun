#include<stdio.h>
void main()
{
    /*int n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);*/
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4-i;j++)
        {
            printf(" ");
        }

        for(int r=1;r<=4;r++)
        {
            printf("*");
        }
        printf("\n");
    }
}