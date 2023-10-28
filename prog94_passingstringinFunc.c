#include<stdio.h>

void display(char[],char[]);  // or we can write void display(char* , char*);

void main()
{
    char s1[]="Romit";
    char s2[]="Ghosh";
    display(s1,s2);
}

void display(char s1[],char s2[])  
{
    int length=0,len=0;
    printf("The string 1 is: %s\n",s1);
    for(int i=0;s1[i]!='\0';i++)
    {
        length++;
    }
    printf("Length of string 1 is:%d\n",length);
    s2[1]='r';
    printf("The string 2 becomes: %s\n",s2);
    for(int j=0;s2[j]!='\0';j++)
    {
        len++;
    }
    printf("Length of string 2 is %d\n",len);
}