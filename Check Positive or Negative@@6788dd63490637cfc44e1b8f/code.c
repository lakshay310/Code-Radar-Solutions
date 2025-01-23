#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if (a>0){
        printf("Positive\n");
    }elif (a<0){
        printf("Negative\n");
    }else{
        printf("Zero");
    }
    return 0;
}