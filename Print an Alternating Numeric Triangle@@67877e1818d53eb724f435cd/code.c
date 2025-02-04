#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        int n = i % 2;
        for (int j = 1; j <= i; j++) {
            printf("%d ", n);
            n = 1 - n;
        }
        printf("\n");
    }
    return 0;
}