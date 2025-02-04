#include <stdio.h>
int main() {
    int r;
    char ch='A';
    scanf("%d",&r);
    for (int i=1;i<=r;i++){
        for (int j=1;j<=i;j++){
            printf("%c ",ch);
            ch++;
        }
        ch='A';
        printf("\n");
    }
    return 0;
}