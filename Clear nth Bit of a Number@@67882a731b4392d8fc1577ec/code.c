#include <stdio.h>

int main() {
    int num,n;
    scanf("%d",&num);
    scanf("%d",&n);
    num &=~(1<<n);
    printf("%d",num);
    return 0;
}