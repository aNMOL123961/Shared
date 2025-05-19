#include <stdio.h>

int main() {
    int a = 5;
    int b = 3;
    printf("Bitwise AND : %d\n", a & b); 
    printf("Bitwise OR : %d\n", a | b);  
    printf("Bitwise XOR : %d\n", a ^ b);  
    printf("Bitwise NOT of a: %d\n", ~a);
    printf("Left shift by 1: %d\n", a << 1); 
    printf("Right shift by 1: %d\n", a >> 1); 
    return 0;
}

