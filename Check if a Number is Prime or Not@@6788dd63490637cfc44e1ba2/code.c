#include <stdio.h>
int main() {
    int a,i,b;
    scanf("%d",&a);
    if(a%1==0 && a%a==0){
        b=0;
    }else{
        for (i=2;i<=n/2;++i){
            if (n%i==0){
                b=0;
                break
            }
        }
    }
    if(b){
        printf("Prime\n");
    }else{
        printf("Not Prime\n");
    }
    return 0;
}