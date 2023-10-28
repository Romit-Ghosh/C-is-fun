#include<stdio.h>

int letter(char[],int);

void main()
{
    int n;
    char s[100];
    printf("Enter the string : ");
    gets(s);
    int index=letter(s,0);
    if(index==0)
    {
        printf("No capital letter found");
    }
    else
    {
        printf("In the string  '%s'  capital letter is %c and it is found in %d position",s,s[index],index+1);
    }
}

int letter(char a[],int n)
{
    if(a[n]=='\0')
    return 0;
    else if(a[n]>='A'&&a[n]<='Z')
    {
        return n;
    }
    else
    return letter(a,n+1);
}