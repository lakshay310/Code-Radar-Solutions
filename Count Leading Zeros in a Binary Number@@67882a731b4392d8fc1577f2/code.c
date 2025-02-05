#include <stdio.h>

int countLeadingZeros(unsigned int n) {
    int count = 0;
    unsigned int mask = 1 << 31;
    while (mask > 0 && (n & mask) == 0) {
        count++;
        mask >>= 1;
    }
    return count;
}
int main() {
    unsigned int n;
    scanf("%u", &n);
    int leadingZeros = countLeadingZeros(n);
    printf("%d\n", leadingZeros);

    return 0;
}