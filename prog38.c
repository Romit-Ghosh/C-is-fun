#include<stdio.h>
void main()
{
    int n;
    char A=65;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%c",(char)A+(j-1));
        }
         printf("\n");
        A=65;
    }
   
}