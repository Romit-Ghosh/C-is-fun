#include<stdio.h>
//function declaration
int sum(int a, int b);
void printtable(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    printtable(n);// argument/actual parameter
    
    return 0;
}

// function definition
void printtable(int n)
{
    for(int i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    } 
}