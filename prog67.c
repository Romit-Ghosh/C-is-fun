#include<stdio.h>
int sum(int n);

int main()
{
    int n;
    printf("Enter number:");
    scanf("%d",&n);
    printf("sum is : %d", sum(n));
    return 0;
}

int sum(int n)
{
    if(n == 1) {
        return 1;
    }
    int sumn=sum(n-1)+n;
    return sumn;
    
}

