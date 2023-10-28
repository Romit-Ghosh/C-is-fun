#include<stdio.h>
void main()
{
    char name[30];
    puts("Enter the name:");
    gets(name);
    puts(name);
    printf("%.2s\n",name);
    printf("%10.3s\n",name);
    printf("%s",&name[2]);
}