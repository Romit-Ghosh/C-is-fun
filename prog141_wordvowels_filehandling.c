#include<stdio.h>
#include<stdlib.h>
void main()
{
    char ch;
    int vowel=0,words=0;
    FILE*fp;
    fp=fopen("words.txt","r");
    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }
    while((ch=fgetc(fp))!=EOF)
    {
        ch=fgetc(fp);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            vowel++;
        }
        else if(ch==' '|| ch=='\n'|| ch=='\t')
        {
            words++;
        }
    }
    printf("Total number of vowels are %d \n and words are %d",vowel,words);
    fclose(fp);
}