#include <stdio.h>
int pali();

void main()
{
    int n, palindrome,temp;
    printf("Enter a number : ");
    scanf("%d", &n);
    temp=n;
    palindrome = pali(n);
    if (palindrome == temp)
    {
        printf("Number is palindrome");
    }
    else
        printf("NUmber is not palindrome");
}

int pali(int n)
{
    int r;
    static int s = 0;

    if (n > 0)
    {
        r = n % 10;
        s = s * 10 + r;
        pali(n / 10);
    }

    else
        return s;
}