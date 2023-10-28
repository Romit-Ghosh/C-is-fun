#include<stdio.h>
#include<string.h>
void main()
{
    char s[30],ch;
    printf("Enter string: \n");
    gets(s);

    /*strlwr(s);
    puts(s);*/

    //using for loop

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A' && s[i]<='Z')  //upper to lower case
        {
            s[i]=s[i]+32;

        }
        else if(s[i]>='a' && s[i]<='z')  //lower to upper case 
        {
            s[i]=s[i]-32;
        }
    }
    printf("The converted string is :%s",s);
}