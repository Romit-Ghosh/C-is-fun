#include<stdio.h>
void main()
{
    int n;
    printf("enter the number of rows:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>=1;j--)
        {
            printf("%c",j+64);
        }
        printf("\n");
        
    }
}