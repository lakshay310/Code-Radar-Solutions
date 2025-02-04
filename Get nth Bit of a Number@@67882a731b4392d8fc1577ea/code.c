#include <stdio.h>
int main() {
    int num,n;
    scanf("%d",&num);
    scanf("%d",&n);
    int Bit=(1>>n)&num;
    printf("%d\n",n,num,Bit);
    return 0;
}