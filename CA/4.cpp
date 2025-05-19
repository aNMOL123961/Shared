#include <stdio.h>
#include <stdlib.h>

void decimalToBinary(int decimal) {
    int binary[32], i = 0;
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
    printf("\n");
}
int main() {
    char octal[32]; 
    printf("Enter an octal number: ");
    scanf("%s", octal);
    int decimal = strtol(octal, NULL, 8);
    printf("Decimal: %d\n", decimal);
    decimalToBinary(decimal);
    printf("Hexadecimal: %X\n", decimal);
    return 0;
}

