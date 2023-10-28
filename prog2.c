/*Ramesh's basic salary is input from the user.His dearness allowness is 40% of basic salary and house rent salary is 20% of basic
salary.write a prog to cal his gross salary.*/

#include<stdio.h>
void main()
    {
      int basic_salary;
      float gross_salary;
      printf("enter the basic salary :");
      scanf("%d",&basic_salary);
      gross_salary=.4*basic_salary+.2*basic_salary;
      printf("the gross salary is= %f\n",gross_salary);
    }
