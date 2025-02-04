#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);

    // Method 1: Bitwise Operations
    while (!(num & 1)) { // Check if least significant bit is 0
        count++;
        num >>= 1; // Right shift to check the next bit
    }

    // Method 2: Using modulo operator
    /*
    while (num % 2 == 0) {
        count++;
        num /= 2;
    }
    */

    printf("%d\n", count);

    return 0;
}