#include<stdio.h>
#include<string.h>
void main()
{
    char s[30];
    int l,flag=0;
    printf("Enter strings: ");
    gets(s);
    l=strlen(s);
    for(int i=0;i<l;i++)
    {
        if(s[i]!=s[l-1-i]){
         flag=1;
         break;
        }    
    }
    if(flag==1)
        {printf("not palindrome\n");}
        else
        {printf("palindrome\n");}
}