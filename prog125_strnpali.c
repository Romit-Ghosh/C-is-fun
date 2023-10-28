#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int l,flag=0;
    printf("enter a string :");
    gets(s);
    l=strlen(s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]!=s[l-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("it is not a palindrome");
    }
    else
    printf("it is a palindrome");
}