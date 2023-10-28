#include<stdio.h>
#include<string.h>
void main()
{
    char s[30],ch;
    int l,vowel=0,conso=0;
    printf("Enter string:");
    gets(s);
    l=strlen(s);
    for(int i=0;/*s[i]!='\0'*/i<l;i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            vowel++;
        else if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z')
            conso++;
    }
    printf("Total number of vowels in the string are %d\n",vowel);
    printf("Total number of conso in the string are %d\n",conso);
}