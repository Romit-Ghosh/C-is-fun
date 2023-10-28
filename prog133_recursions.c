/*Ask user to enter three numbers then pass the value to a function. Add three numbers
inside the function and return the result to main function. Inside main function display
the result by adding 10 to it.*/

#include<stdio.h>
int sum();

void main()
{
    int a,b,c,add;
    printf("Enter three number : ");
    scanf("%d %d %d",&a,&b,&c);
    add=sum(a,b,c);
    printf("The actual result by adding +10 is : %d",add+10);
}

int sum(int p,int q, int r)
{
    return p+q+r;
}