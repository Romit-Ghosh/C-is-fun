#include<stdio.h>
void main()
{
    int n;
    char A=65;
    printf("Enter the number of rows :");
    scanf("%d",&n);
    for(int i=5;i>=1;i++)
    {
        for(int j=i;j>=1;j--)
        {
            printf("%c",A);
            A--;
            
        }
        
        
        printf("\n");
    }
}