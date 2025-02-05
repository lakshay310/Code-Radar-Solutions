#include <stdio.h>
int main() {
    int num,n;
    scanf("%d",&num);
    scanf("%d",&n);
    int bit=(n>1)&num;
    printf("%d\n",n,bit);
    return 0;
} 