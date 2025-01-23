#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a%5==0){
        if(a%11==0){
            printf("Divisible\n");
        }else{
            printf("Not Divisible\n");
        }
    }else{
        printf("Not divisible\n");
    }
    return 0;
}