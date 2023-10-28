#include<stdio.h>
void main()
{
    int n,a=69;
    printf("Enter the number of rows :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            printf("%c",a);
            a--;
        }
        
        
        printf("\n");
    }
}