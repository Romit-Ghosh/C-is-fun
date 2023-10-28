#include<stdio.h>
void main()
{
    float sal;
    printf("\nenter salary :");
    scanf("%f",&sal);
    (sal>=25000 && sal<=40000)?printf("Manager\n"):(sal>=15000 && sal<25000)?printf("Accountant\n"):printf("Clerk\n");
}