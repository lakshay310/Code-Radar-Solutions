#include <stdio.h>
int main() {
    float a,b,r;
    char c;
    scanf("%f %f",&a,&b);
    scanf("%c",&c);
    switch(c){
        case '+':
        result=a+b;
        break;
        case '-':
        result=a-b;
        break;
        case '*':
        result=a*b;
        break;
        case '/':
        if(b==0){
            printf("Error\n");
            return1;
        }
        result= a/b;
        break;
        default:
        printf("Error\n");
        return 1;
    }
    printf("Result:%.2f\n",result);
    return 0;
}