#include <stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if((a>='a'&&a<='z')||(a>='A'&&a<='Z')){
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
            printf("Vowel\n");
        }else{
            printf("Constant\n");
        }
    }else if(a>='0'&&a<='9'){
        printf("Digit\n");
    }else{
        printf("Special Character\n");
    }
    return 0;
}