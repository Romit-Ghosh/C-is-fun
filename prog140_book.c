#include<stdio.h>
#include<stdlib.h>
void main()
{
    char ch;
    FILE*fp;
    fp=fopen("book.txt","r");
    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }
    while(!feof(fp))
    {
        ch=fgetc(fp);
        printf("%c",ch);
    }
    fclose(fp);
}