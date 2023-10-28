#include<stdio.h>
#include<string.h>
void main()
{
    char s1[30],s2[30];
    int value,flag=0;
    printf("Enter string 1:\n");
    gets(s1);
    printf("Enter string 2:\n");
    gets(s2);
    
    /*value=strcmp(s1,s2);
    if (value==0)
    printf("same");
    else
    printf("not same");*/

    //using for loop

    for(int i=0;s1[i]!='\0' && s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
            flag=1;
            break;
        }
        
    }
    if(flag==1)
    printf("not same");
    else
    printf("same");
}
