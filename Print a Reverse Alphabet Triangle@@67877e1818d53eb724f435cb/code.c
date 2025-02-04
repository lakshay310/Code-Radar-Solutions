#include <stdio.h>
int main() {
    int n,i,j;
    char ch='A';
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=n-i+1;j++){
            printf("%d ",j);
            ch++;
        }
        ch='A';
        printf("\n");
    }
    return 0;
}