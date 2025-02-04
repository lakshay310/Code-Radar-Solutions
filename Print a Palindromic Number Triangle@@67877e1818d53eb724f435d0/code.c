#include <stdio.h>
int main() {
    int a,space;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        for (space =1;space<=a-i;space++){
            printf(" ");
        }
        for (int j=1;j<=i;j++){
            printf("%d",j);
        }
        
        
        printf("\n");
    }
    return 0;
}