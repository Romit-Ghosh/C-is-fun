#include<stdio.h>
#include<string.h>
void main()
{
    char name[30];
    int len=0,n,i=0,count=0;
    printf("Enter name:");
    gets(name);
    //len=strlen(name);

    //with for loop
    for(int i=0;name[i]!='\0';i++)
    {
        len++;
    }
    printf("length of string is %d\n",len);

    //with while loop
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
     printf("length of string is %d\n",count);

}