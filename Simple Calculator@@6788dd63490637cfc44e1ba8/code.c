#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%c",&c);
    switch(c){
        case '+':
        printf("%d+%d=%d\n",a,ba+b);
        break;
        case'-':
        printf("%d-%d=%d\n",a,b,a-b);
        break;
        case '*':
        printf("%d*%d=%d\n",a,b,a*b);
        break;
        case '/':
        printf("%d/%d=%d\n",a,b,a/b);
        break;
        default:
        printf("Error");
    }
    return 0;
}