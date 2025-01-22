#include <stdio.h>
int main() {
    char str1[100],str2[100];
    scanf("%s %s",&str1,&str2);
    int age;
    scanf("%d",&age);
    printf("Name: %s\n", str1);
    printf("Age: %d\n",age);
    printf("Hobby: %s\n", str2);
    return 0;
}