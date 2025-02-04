#include <stdio.h>
int main() {
    int a, sum=0,result;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
        sum+=i;
        result=sum;
        printf("%d\n",result);
    }
    return 0;
}