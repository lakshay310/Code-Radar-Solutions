#include <stdio.h>
int main() {
    int a,n;
    scanf("%d %d",&n,&a);
    int nthBit=(a>>n)&1;
    printf("%d", a);
    return 0;
}