#include<stdio.h>

char *display();

void main()
{
    char *str;
    str=display();
    printf("String is:%s\n",str);
}

char *display()
{
    char *str="Romit";
    return str;
    /*static char str[]="Romit";
    return str;*/
    //return "Romit";
}