#include<stdio.h>
void main()
{
    int n;
    int a=1;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
           printf("    %d",a);
           a++;
        }
        a=1;
        printf("\n");
    }
}