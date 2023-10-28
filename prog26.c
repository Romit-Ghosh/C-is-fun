#include<stdio.h>
void main()
{
    char ch;
    printf("\nEnter character: ");
    scanf("%c",&ch);
    ch>=97 && ch<=122 ? printf("Enterred character is lower case\n"):printf("Entered character is not in lower case\n");
}