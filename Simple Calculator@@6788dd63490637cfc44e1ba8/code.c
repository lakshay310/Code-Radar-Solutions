#include <stdio.h>
int main() {
    int a,b;
    char c;
    scanf("%d\n",&a);
    scanf("%d\n",&b);
    scanf("%c",&c);
    switch(c){
        case '+':
        printf("%d\n",a,b,a+b);
        break;
        case'-':
        printf("%d\n",a,b,a-b);
        break;
        case '*':
        printf("%d\n",a,b,a*b);
        break;
        case '/':
        if (b==0){
            printf("Error:Divisionby zero\n");
        }else{
        printf("%d\n",a,b,a/b);
        }
        break;
        default:
        printf("Error");
    }
    return 0;
}