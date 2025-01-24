#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    switch(a){
        case 'A':
        printf("Excellent\n");
        break;
        case 'B':
        printf("Good\n");
        break;
        case 'C':
        printf("Average\n");
        break;
        case 'D':
        printf("Below Average\n");
        break;
        case 'F':
        printf("Fail\n");
        break;
        default;
        printf("Invalid grade");
    }
    printf("%s", welcome());
    return 0;
}