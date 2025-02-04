#include <stdio.h>
int main() {
    int num,n;
    scanf("%d",&num);
    scanf("%d",&n);
    int Bit=(num>>n)&1;
    printf("%d\n",n,num,Bit);
    return 0;
}