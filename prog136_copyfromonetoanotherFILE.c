/*Write a program in C to copy the contents of one file into another file, character by
character.*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp1, *fp2;
    char c,ch;
    fp1=fopen("copy.txt","r+");
    if(fp1==NULL)
    {
        printf("Error !");
        exit(0);
    }
    fp2=fopen("paste.txt","w");
    if(fp2==NULL)
    {
        printf("Error !");
        exit(0);
    }
    while((c=fgetc(fp1))!=EOF)
    {
        fputc(c,fp2);
    }
    printf("Successfully copied :)\n");
    fclose(fp1);
    fclose(fp2);
    fp2=fopen("paste.txt","r");
    while(!feof(fp2))
    {
        ch=fgetc(fp2);
        printf("%c",ch);
    }
    fclose(fp2);
}