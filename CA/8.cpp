#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void binaryToGray(char* binary, char* gray) {
    int len = strlen(binary);
    gray[0] = binary[0];
    for (int i = 1; i < len; i++)
        gray[i] = ((binary[i - 1] - '0') ^ (binary[i] - '0')) + '0';
    gray[len] = '\0'; 
}
void grayToBinary(char* gray, char* binary) {
    int len = strlen(gray);
    binary[0] = gray[0]; 
    for (int i = 1; i < len; i++)
        binary[i] = ((binary[i - 1] - '0') ^ (gray[i] - '0')) + '0';
    binary[len] = '\0'; 
}
int main() {
    char binary[32], gray[32], convertedBinary[32];
    printf("Enter a binary number: ");
    scanf("%s", binary);
    binaryToGray(binary, gray);
    printf("Gray Code: %s\n", gray);
    grayToBinary(gray, convertedBinary);
    printf("Converted Back to Binary: %s\n", convertedBinary);
   return 0;
}
