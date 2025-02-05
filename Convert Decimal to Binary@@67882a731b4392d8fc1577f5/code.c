#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    unsigned int mask = 1 << (sizeof(int) * 8 - 1);
    int lZ = 1;
    for (; mask > 0; mask >>= 1) {
        if (n & mask) {
            printf("1");
            lZ = 0;
        } else if (!lZ) {
            printf("0");
        }
    }
    if (lZ) {
        printf("0");
    }
    printf("\n");
    return 0;
}