#include <stdio.h>

int main() {
    int num, count = 0;
    scanf("%d", &num);
    while (num % 2 == 0) {
        count++;
        num /= 2;
    }
    printf("%d\n", count);
    return 0;
}