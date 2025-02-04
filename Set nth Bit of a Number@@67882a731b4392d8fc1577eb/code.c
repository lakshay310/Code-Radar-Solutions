#include <stdio.h>

int main() {
    int num, n;
    scanf("%d", &num);
    scanf("%d", &n);
    int result = num | (1 << n);
    printf("%d\n", result);
    return 0;
}