#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int main() {
    char str[100];  // Assuming the input string won't exceed 100 characters

    printf("Enter a string: ");
    scanf("%s", str);  // Reads input (without spaces)

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}