// write a C program to compute sum (S) of the the series given below for N terms. S=1/1!+2/2!+3/3!+....+N/N!.

#include <stdio.h>

int main() {
    int N, i;
    float sum = 0, fact = 1;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for(i=1; i<=N; i++) {
        fact *= i;
        sum += (float)i/fact;
    }

    printf("The sum of the series is: %f", sum);

    return 0;
}
