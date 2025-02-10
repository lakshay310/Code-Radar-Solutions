#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    len = strlen(str);
    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            printf("\n");
            return 0;
        }
    }

    printf("\n");
    return 0;
}
