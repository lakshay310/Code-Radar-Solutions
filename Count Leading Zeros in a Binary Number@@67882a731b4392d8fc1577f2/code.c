#include <stdio.h>
int main() {
    unsigned int n;
    int count=0;
    scanf("%u",&num);
    for (int i=31; i>=0;i--){
        if ((num>>i)&1){
            break;
        }
        count++;
    }
    printf("%d", count);
    return 0;
}