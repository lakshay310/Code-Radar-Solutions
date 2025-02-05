#include <stdio.h>

int main() {
    int x, n;
    scanf("%d", &x);
    scanf("%d", &n);
    int bitValue = (x >> n) & 1;
    printf("%d\n",bitValue);
    return 0;
}