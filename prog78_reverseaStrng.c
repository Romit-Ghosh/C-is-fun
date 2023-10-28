#include<stdio.h>
#include<string.h>
void main()
{
    char s1[30],s2[30],ch;
    int l2,l1,i=0;
    printf("Enter string :\n");
    gets(s1);

   /*strrev(s1);
    puts(s1);*/
    l1=strlen(s1);

    //using for loop

    for(int i=0;i<l1/2;i++)
    {
        ch=s1[i];
        s1[i]=s1[l1-1-i];
        s1[l1-1-i]=ch;
    }
    printf("Reverse of the string is : %s\n",s1);

    //using while loop

    while(i<l1/2)
    {
        ch=s1[i];
        s1[i]=s1[l1-1-i];
        s1[l1-1-i]=ch;
        i++;
    }
    printf("Reverse of the string is : %s\n",s1);

}    