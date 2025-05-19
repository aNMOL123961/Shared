#include <stdio.h>
#include <stdlib.h>

int binaryToDecimal(char* binary) {
    return strtol(binary, NULL, 2);
}
void decimalToBinary(int decimal) {
    if (decimal == 0) {
        printf("Binary: 0\n");
        return;
    }
    char binary[32];
    int i = 0;
    while (decimal > 0) {
        binary[i++] = (decimal % 2) + '0';
        decimal /= 2;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--)
        printf("%c", binary[j]);
    printf("\n");
}
int main() {
    char bin1[32], bin2[32];
    char operation;
    printf("Enter first binary number: ");
    scanf("%s", bin1);
    printf("Enter second binary number: ");
    scanf("%s", bin2);
    printf("Enter operation (+ or -): ");
    scanf(" %c", &operation);
    int decimal1 = binaryToDecimal(bin1);
    int decimal2 = binaryToDecimal(bin2);
    int result = (operation == '+') ? (decimal1 + decimal2) : (decimal1 - decimal2);
    printf("Decimal: %d\n", result);
    decimalToBinary(result);
    return 0;
}
