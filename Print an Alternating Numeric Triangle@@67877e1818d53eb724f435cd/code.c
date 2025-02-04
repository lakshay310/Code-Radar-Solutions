#include <stdio.h>
int main() {
    int a,s;
    scanf("%d",&a);
    s=1;
    for(int i=1;i<=a;i++){
        for (int j=1;j<=i;j++){
            printf("%d",s);
            s=s-1;
        }
        printf("\n");
        s=1-s;
    }
    return 0;
}