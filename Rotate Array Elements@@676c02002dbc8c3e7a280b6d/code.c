#include <stdio.h>

int main() {
    int n, K;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &K);
    K = K % n;
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    for (int i = 0; i < K / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[K - i - 1];
        arr[K - i - 1] = temp;
    }
    for (int i = K; i < (n + K) / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i + K - 1];
        arr[n - i + K - 1] = temp;
    }
    for (int i = 0; i < n; i++) {
        printf("%d\n ", arr[i]);
    }
    printf("\n");

    return 0;
}
