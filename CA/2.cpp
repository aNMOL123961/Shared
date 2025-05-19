#include <stdio.h>
void convertToBinary(int num) {
    int binary[32], i = 0;
    while (num > 0) {
        binary[i++] = num % 2;
        num /= 2;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}
int main() {
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    convertToBinary(decimal);
    printf("Octal: %o\n", decimal);
    printf("Hexadecimal: %X\n", decimal);
    return 0;
}

