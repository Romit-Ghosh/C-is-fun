#include <stdio.h>

int go_out_or_not(int , int);

int main() {
  int car_number, day_number;

  printf("Enter your car number (only number part): ");
  scanf("%d", &car_number);

  printf("Enter the day number (1-7): ");
  scanf("%d", &day_number);

  int result = go_out_or_not(car_number, day_number);

  if (result == 1) {
    printf("You should go out in your car.\n");
  } else {
    printf("You should not go out in your car.\n");
  }

  return 0;
}

int go_out_or_not(int car_number, int day_number) {
  if ((car_number % 2 == 0 && day_number % 2 == 0) ||
      (car_number % 2 != 0 && day_number % 2 != 0)) {
    return 1;
  } else {
    return 0;
  }
}
