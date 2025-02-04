#include <stdio.h>
int main() {
    int r;
    scanf("%d",&r);
    for (int i=64;i<=r;i++){
        for (int j=64;j<=i;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}