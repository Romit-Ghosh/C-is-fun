#include<stdio.h>
#include<string.h>

int palindrome(char[]);

void main()
{
    char s[30];
    int pali;
    pali=palindrome(s);
    if(pali==1)
    {
        printf("It is not a palindrome");
    }
    else
    {
        printf("It is a palindrome");
    }
}

int palindrome(char s[])
{
    int l,flag=0;
    printf("Enter string :");
    gets(s);
    l=strlen(s);
    for(int i=0;i<l;i++)
    {
        if(s[i]!=s[l-1-i])
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
    }
    return flag;
}