#include <stdio.h>
int main() {
    int num,n;
    scanf("%d",&num);
    scanf("%d",&n);
    int nthBit=(num>>n)&1;
    printf("%d\n",num);
    return 0;
}