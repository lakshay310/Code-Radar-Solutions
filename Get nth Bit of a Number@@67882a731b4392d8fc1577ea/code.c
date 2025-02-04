#include <stdio.h>
int main() {
    int num,n;
    scanf("%d",&num);
    scanf("%d",&n);
    int Bit=(n>>1)&num;
    printf("%d\n",n,num,Bit);
    return 0;
}