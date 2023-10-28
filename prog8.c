#include<stdio.h>
void main()
{
  int num,n1,n2,n3,n4,n5;
  printf("Enter the five digit number : ");
  scanf("%d",&num);
  n5=num%10;
  n4=(num/10)%10;
  n3=(num/100)%10;
  n2=(num/1000)%10;
  n1=(num/10000)%10;
  printf("the sum of the digits is :%d",n1+n2+n3+n4+n5) ; 
}