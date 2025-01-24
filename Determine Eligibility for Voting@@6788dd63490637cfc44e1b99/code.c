#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>=18){
        printf("Eligible\n");
    }else{
        printf("Not Eligible\n");
    }
    return 0;
}