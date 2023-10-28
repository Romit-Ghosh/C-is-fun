#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *input_file, *output_file;
    char c, ch;
    int count = 0;

    /* char *input_filename, output_filename[50];

     Prompt user for input file name
     printf("Enter input file name: ");
     scanf("%s", input_filename);

     Prompt user for output file name
     printf("Enter output file name: ");
     scanf("%s", output_filename);

     Open input file for reading*/

    input_file = fopen("lower.txt", "r");
    if (input_file == NULL)
    {
        printf("Error opening input file.");
        return 1;
    }

    // Open output file for writing
    output_file = fopen("upper.txt", "w");
    if (output_file == NULL)
    {
        printf("Error opening output file.");
        return 1;
    }

    // Read input file character by character and convert case
    while ((c = fgetc(input_file)) != EOF)
    {
        if (c >= 'a' && c <= 'z')
        {
            c = c - 32;
            count++;
        }
        else if (c >= 'A' && c <= 'Z')
        {
            c = c + 32;
            count++;
        }
        fputc(c, output_file);
    }

    // Close input and output files
    fclose(input_file);
    fclose(output_file);

    printf("Conversion complete.\n");
    output_file = fopen("upper.txt", "r");
    while (!feof(output_file))
    {
        c = fgetc(output_file);
        printf("%c", c);
    }
    fclose(output_file);
    printf("\nNumber of case changes: %d\n", count);

    return 0;
}
