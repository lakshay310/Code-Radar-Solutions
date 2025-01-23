#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    if(a%4==0 &&a%100==0){
        printf("Leap Year\n")
    }else{
        printf("Not a leap Year\n");
    }
    return 0;
}