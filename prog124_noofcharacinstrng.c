#include<stdio.h>
void main()
{
    char s[100];
    int ch=0;
    printf("enter a string :");
    gets(s);
    for(int i=0;s[i]!='\0';i++)
    {
        ch++;   
    }
    printf("%d no of char",ch);
}