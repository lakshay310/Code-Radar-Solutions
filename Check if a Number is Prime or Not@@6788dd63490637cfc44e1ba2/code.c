#include <stdio.h>
int main() {
    int n,a,a1;
    scanf("%d",&n);
    for(a=1;a<=n;a++){
        if(n%a==0){
            a1+=1;
        }
    }if(a==2){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}