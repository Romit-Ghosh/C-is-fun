#include <stdio.h>

struct add
{
    int n1;
    int n2;
};

void main()
{
    struct add num[3];
    int sum = 0, sub = 0, mul = 0, div = 0;
    for (int i = 1; i <= 3; i++)
    {
        printf("Enter 1st number: ");
        scanf("%d", &num[i].n1);
        printf("Enter 2nd number: ");
        scanf("%d", &num[i].n2);
        sum = num[i].n1 + num[i].n2;
        sub = num[i].n1 - num[i].n2;
        mul = num[i].n1 * num[i].n2;
        div = num[i].n1 / num[i].n2;
        printf("Sum of two numbers is %d\n", sum);
        printf("Sub of two numbers is %d\n", sub);
        printf("multiplication of two numbers is %d\n", mul);
        printf("division of two numbers is %d\n", div);
    }
}