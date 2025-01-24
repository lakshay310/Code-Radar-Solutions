#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a==0){
        printf("Freezing\n");
    }else if(a>0){
        printf("Above Freezing\n");
    }else{
        printf("Freezing\n");
    }
    return 0;
}