#include <stdio.h>
int main() {
    int sp,cp;
    scanf("%d %d",&sp,&cp);
    if(sp>cp){
        printf("Profit\n");
    }else if (sp<cp){
        printf("Loss\n");
    }else{
        printf("No Profit No Loss\n");
    }
    return 0;
}