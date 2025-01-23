#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if((!(a>0)&&(b>0))||((a>0)&&!(b>0))){
        printf("True\n")
    }else{
        printf("False\n")
    }
        printf("%s", welcome());
    return 0;
}