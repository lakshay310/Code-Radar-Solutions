#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    switch(a){
        case 'R':
        printf("Stop\n");
        break;
        case 'G':
        printf("Go\n");
        break;
        case 'Y':
        printf("Slow Down\n");
        break;
        default:
        printf("Invalid input");
    }
    return 0;
}