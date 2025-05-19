#include <stdio.h>
#include <stdlib.h>

int main() {
    char binary[32];
    printf("Enter a binary number: ");
    scanf("%s", binary);
    int decimal = strtol(binary, NULL, 2);
    printf("Decimal: %d\n", decimal);
    printf("Octal: %o\n", decimal);
    printf("Hexadecimal: %X\n", decimal);
    return 0;
}
