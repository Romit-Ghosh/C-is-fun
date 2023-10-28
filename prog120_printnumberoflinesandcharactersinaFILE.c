#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp = NULL;
    char ch;
    int LineCount =1, charcount =0;
    fp = fopen("abc.txt","r+");
    if (fp == NULL) 
    {
        printf(" NO FIlE");
        exit(1);
    }
    while((ch = fgetc(fp))!= EOF)
    {
        if(ch!='\n')
        {
            charcount++;
        }
        if(ch == '\n')
        {
            LineCount++;
        }
    }
    fclose(fp);
    printf("The LineCount and charcount is %d and %d", LineCount, charcount);
}