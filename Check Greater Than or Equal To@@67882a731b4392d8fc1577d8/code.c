#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if (a>=b){
        printf("True\n");
    }else{
        printf("False\n");
    }
    printf("%s", welcome());
    return 0;
}