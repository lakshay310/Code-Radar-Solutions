#include <stdio.h>
int main() {
    int i;
    scanf("%d",&i);
    for (int n=1;n<=i;n++){
        for (int j=1;j<=i-1;j++){
            printf(" ");
        }
        for (intj=1;j<=n;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}