#include <stdio.h>
int main() {
    int n,i;
    int ec=0,oc=0;
    scanf("%d",&n);
    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            ec++;
        } else {
            oc++; 
        }
    }
    printf("%d", ec);
    printf(" %d", oc);
    return 0;
}