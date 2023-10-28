#include <stdio.h>

int fibo();
void fibosum();

void main()
{
    int n;
    printf("Enter number of terms : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fibo(i));
    }
    fibosum(n);
}

int fibo(int n)
{
    /*if (n == 0)
        return 0;
    else if (n == 1)
        return 1;*/
    if (n == 0 || n == 1)
        return n;
    else
        return fibo(n - 1) + fibo(n - 2);
}

void fibosum(int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += fibo(i);
    }
    printf("\nsum of the fibonacci series is %d", sum);
}