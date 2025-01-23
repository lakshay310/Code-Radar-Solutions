#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a&1){
        printf("True\n");
    }esle{
        printf("False\n");
    }
    return 0;
}