#include <stdio.h>

int main() {
    char str[100];
    int i, vc = 0;
    scanf("%s", str);
    for (i = 0;; i++) {
        char k = str[i];
        if (k == 'a' || k == 'e' || k == 'i' || k == 'o' || k == 'u' || 
            k == 'A' || k == 'E' || k == 'I' || k == 'O' || k == 'U') {
            vc++;
        }
    }
    printf("%d", vc);
    return 0;
}
