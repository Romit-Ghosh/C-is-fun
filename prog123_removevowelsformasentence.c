#include <stdio.h>

void removeVowels(char[]);

int main()
{
    char s[100];

    printf("Enter a sentence: \n");
    gets(s);

    // Read multiple sentences from standard input

    removeVowels(s);
    printf("%s", s);

    return 0;
}

void removeVowels(char s[])
{
    int i, j;

    // Remove vowels from string
    for (i = 0, j = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            continue;
        }
        s[j] = s[i];
        j++;
    }
    s[j] = '\0'; // add null terminator to end of string
}
