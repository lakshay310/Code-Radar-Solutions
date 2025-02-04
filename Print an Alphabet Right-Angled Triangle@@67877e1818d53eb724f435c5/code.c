#include <stdio.h>
int main() {
    char r;
    scanf("%c",&r);
    for (char i=1;i<=r;i++){
        for (char j=1;j<=i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}