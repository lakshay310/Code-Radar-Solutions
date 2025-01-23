#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a>=90){
        printf("A\n");
    }else if(80<=a){
        printf("B\n");
    }else if(70<=a){
        printf("C\n");
    }else if(60<=a){
        printf("D\n");
    }else{
        printf("F\n");
    }
    return 0;
}