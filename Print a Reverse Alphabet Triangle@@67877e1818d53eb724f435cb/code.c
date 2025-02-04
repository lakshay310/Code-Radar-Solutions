#include <stdio.h>
int main() {
    int n,i,j;
    char ch;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        ch='A'+i-1;
        for (j=1;j<=n-i+1;j++){
            printf("%c ",ch);
        
        }
        printf("\n");
    }
    return 0;
}