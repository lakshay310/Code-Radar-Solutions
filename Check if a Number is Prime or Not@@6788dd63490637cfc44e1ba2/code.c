#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    if(a%1==0 && a%a==0){
        printf("Prime\n");
    }else if(a<1){
        printf("Not Prime\n");
    }else if(a%b==0){
        printf("Not Prime\n");
    }
    else{
        printf("Not Prime\n");
    }
    return 0;
}