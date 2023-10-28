/*Find the solutions by using recursive function
Find out lowest common factor ( LCF ) or greatest common factor of two input
numbers.*/

#include <stdio.h>

int find_gcf();
int find_lcm();

int main() {
  int num1, num2, gcf, lcm;

  printf("Enter the first number: ");
  scanf("%d", &num1);

  printf("Enter the second number: ");
  scanf("%d", &num2);

  gcf = find_gcf(num1, num2);
  lcm = find_lcm(num1, num2, gcf);

  printf("The greatest common factor of %d and %d is %d\n", num1, num2, gcf);
  printf("The lowest common multiple of %d and %d is %d\n", num1, num2, lcm);

  return 0;
}

int find_gcf(int num1, int num2) {
  if (num2 == 0) {
    return num1;
  } else {
    return find_gcf(num2, num1 % num2);
  }
}

int find_lcm(int num1, int num2, int gcf) {
  int lcm = (num1 * num2) / gcf;
  return lcm;
}
