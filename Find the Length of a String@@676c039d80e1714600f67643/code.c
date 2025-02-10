#include <stdio.h>

int findLength(char str[]) {
    int length = 0;
    while (str[length] == '\0') {
        length++;
    }
    
    return length;
}

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);
    int length = findLength(str);
    printf("%d\n", length);

    return 0;
}
