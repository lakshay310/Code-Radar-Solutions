#include <stdio.h>
int main() {
    int num,position=0;
    scanf("%d",&num);
    if(num==0){
        printf();
        return 0;
    }
    while(!(num & 1)){
        num>>=1;
        position++;
    }
    printf("%d\n",position);
    return 0;
}