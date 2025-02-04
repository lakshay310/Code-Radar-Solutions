#include <stdio.h>
int main() {
    int rows,number=1;
    scanf("%d",&rows);
    for (int i=1;i<=rows;i++){
        for (int j=1;j<=i;j++){
            printf("%d ",number);
            number++;
        }
        printf("\n");
    }
    return 0;
}