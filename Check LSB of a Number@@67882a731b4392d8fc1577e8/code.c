#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a&1){
        printf("True\n");
    }else{
        printf("False\n");
    }
    return 0;
}