#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    unsigned int mask = 1 << (sizeof(int) * 8 - 1);
    int leadingZero = 1;
    for (; mask > 0; mask >>= 1) {
        if (n & mask) {
            printf("1");
            leadingZero = 0;
        } else if (!leadingZero) {
            printf("0");
        }
    }
    if (leadingZero) {
        printf("0");
    }
    printf("\n");
    return 0;
}