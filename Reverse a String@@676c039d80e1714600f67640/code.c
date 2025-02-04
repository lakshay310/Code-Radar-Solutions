#include <stdio.h>
int main() {
    char str[100];
    int i,len;
    scanf("%s",&str);
    len=strlen(str);
    for(i=0;i<len/2;i++){
        char temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
    }
    printf("%s\n",str);
    return 0;
}