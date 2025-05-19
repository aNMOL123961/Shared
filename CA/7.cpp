#include <stdio.h>

void registerTransfer(int source, int *destination, int control) {
    if (control == 1) {
        *destination = source;
        printf("Transfer Successful! Destination Register Value: %d\n", *destination);
    } else {
        printf("Transfer Blocked! Control signal is 0.\n");
    }
}
int main() {
    int source, destination = 0, control;
    printf("Enter the source register value: ");
    scanf("%d", &source);
    printf("Enter control signal (0 or 1): ");
    scanf("%d", &control);
    registerTransfer(source, &destination, control);
    return 0;
}
