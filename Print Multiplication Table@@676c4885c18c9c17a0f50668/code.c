#include <stdio.h>
int main() {
    int i;
    scanf("%d",&i);
    for (int a=1;a<=10;a++){
        printf("%d X %d = %d\n",i,a,i*a);
    }
    return 0;
}