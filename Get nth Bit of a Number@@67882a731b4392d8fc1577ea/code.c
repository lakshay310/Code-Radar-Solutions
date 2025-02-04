#include <stdio.h>
int getNthBit(num,n){
    return (num>>n)&1;
}
int main() {
    int num,n;
    scanf("%d",&n);
    printf("%d\n",n,num,getNthBit(num,n));
    return 0;
}