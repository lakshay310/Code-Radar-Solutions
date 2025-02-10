#include <stdio.h>

int main() {
    char str[100];
    int i, vowel_count = 0;
    scanf("%s", str);
    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowel_count++;
        }
    }
    printf("%d", vowel_count);
    return 0;
}
