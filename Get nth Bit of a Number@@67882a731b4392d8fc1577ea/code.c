#include <stdio.h>
int getNthBit(int num,int n){
    return (num>>n)&1;
}
int main() {
    int num,n;
    scanf("%d",&n);
    printf("%d\n",n,num,getNthBit(num,n));
    return 0;
}