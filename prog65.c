//FUNCTIONS IN 'C'
#include<stdio.h>
//function declaration
int sum(int a, int b);

int main()
{
    int a,b;
    printf("Enter first number : ");
    scanf("%d",&a);
    printf("Enter second number : ");
    scanf("%d",&b);
    int s=sum(a,b);  // function call
    printf("Sum is : %d",s);
    return 0;
}

// function definition
int sum(int x, int y)
{
    return 45;
}