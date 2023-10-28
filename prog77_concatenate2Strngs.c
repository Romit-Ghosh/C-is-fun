#include<stdio.h>
#include<string.h>
void main()
{
    char s1[30],s2[30];
    int l2,l1;
    printf("Enter string 1:\n");
    gets(s1);
    printf("Enter string 2:\n");
    gets(s2);
   /* strcat(s1,s2);
    printf("%s\n",s1);
   strncat(s1,s2,3);
    printf("%s\n",s1);*/
    l1=strlen(s1);
    l2=strlen(s2);
    for(int i=0;i<=l2;i++)    //using for loop
    {
        s1[l1+i]=s2[i];
    }
    printf("String after concatenation is : %s",s1);
}