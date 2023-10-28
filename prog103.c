#include<stdio.h>
void main()
{
    int n,rem;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=1;n;i++)
    {
        rem=n%10;
        n=n/10;
        if(rem%2==0)
        {
            printf("%d is even\n",rem);
        }
        else
        {
            printf("%d is odd\n",rem);
        }
    }
}
    