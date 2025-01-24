#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a=0){
        printf("Freezing\n");
    }else{
        printf("Above Freezing\n");
    }
    printf("%s", welcome());
    return 0;
}