#include<stdio.h>
#include<string.h>
void main()
{
    char s[30];
    int l,alpha=0,digit=0,spcl=0;
    printf("Enter string :");
    gets(s);
    l=strlen(s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A'&&s[i]<='Z' || s[i]>='a'&&s[i]<='z')
        alpha++;
        else if(s[i]>='0'&&s[i]<='9')
        digit++;
        else
        spcl++;
    }
    printf("Total no. of alphabets is %d\n",alpha);
    printf("Total no. of digits is %d\n",digit);
    printf("Total no. of special characters is %d\n",spcl);
}