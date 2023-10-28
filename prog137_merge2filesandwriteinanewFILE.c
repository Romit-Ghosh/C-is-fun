/*Write a program in C to merge two files and write it in a new file.*/

#include<stdio.h>
#include<stdlib.h>

int main() {
  FILE *file1, *file2, *output_file;
  char ch;

  // Open the files
  file1 = fopen("file1.txt", "r+");
  if (file1 == NULL) {
    printf("Error opening file\n");
    exit(1);
  }

  file2 = fopen("file2.txt", "r+");
  if (file2 == NULL) {
    printf("Error opening file.\n");
    //fclose(file1);
    exit(1);
  }

  output_file = fopen("mergedfile.txt", "w");
  if (output_file == NULL) {
    printf("Error creating file.\n");
    //fclose(file1);
    //fclose(file2);
    exit(1);
  }

  // Copy the contents of the first file to the output file
  while ((ch = fgetc(file1)) != EOF) {
    fputc(ch, output_file);
  }

  // Copy the contents of the second file to the output file
  while ((ch = fgetc(file2)) != EOF) {
    fputc(ch, output_file);
  }

  // Close the files
  fclose(file1);
  fclose(file2);
  fclose(output_file);

  printf("The contents of file1 and file2 have been merged to another file");

  return 0;
}
