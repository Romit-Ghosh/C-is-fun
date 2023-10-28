#include <stdio.h>

void main()
{
    char str1[100], str2[100];
    int i, flag = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    for (i = 0; str1[i] != '\0' && str2[i] != '\0'; i++)
    {
        if (str1[i] < str2[i])
        {
            flag = -1;
            break;
        }
        else if (str1[i] > str2[i])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0 && str1[i] == '\0' && str2[i] == '\0')
    {
        printf("Both strings are lexicographically equal\n");
    }
    else if (flag == -1)
    {
        printf("String 1 is lexicographically smaller than string 2\n");
    }
    else
    {
        printf("String 1 is lexicographically greater than string 2\n");
    }
}
