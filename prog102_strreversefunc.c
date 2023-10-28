#include<stdio.h>
#include<string.h>

void reverse(char []);

void main()
{
    char s1[30];
    printf("Enter string :");
    gets(s1);
    reverse(s1);
}

void reverse(char s[])
{
    int temp,l;
    l=strlen(s);
    for(int i=0;i<l/2;i++)
    {
        if(s[i]!='\0')
        {
            temp=s[i];
            s[i]=s[l-i-1];
            s[l-i-1]=temp;
        }
    }
    printf("String reversed is %s",s);
}