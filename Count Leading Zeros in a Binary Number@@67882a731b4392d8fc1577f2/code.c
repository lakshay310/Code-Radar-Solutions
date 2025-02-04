#include <stdio.h>
int main() {
    unsigned int n;
    int count=0;
    scanf("%u",&num);
    for (int i=31; i>=0;i--){
        if ((num&(1<<i))==0){
            count++;
        }else{
            break;
        }
    }
    printf("%d", count);
    return 0;
}