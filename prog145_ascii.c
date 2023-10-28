#include <stdio.h>

int main() {
    int ascii_value = 0;

    do {
        printf("ASCII value %d is character '%c'\n", ascii_value, ascii_value);
        ascii_value++;
    } while (ascii_value <= 255);

    return 0;
}
