#include <stdio.h>
int main() {
    int N,i,j,spaces;
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        for (spaces=1;spaces<=N-i;spaces++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}