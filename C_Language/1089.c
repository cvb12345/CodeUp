#include <stdio.h>
int main(){
    int a, d, n, i=1;
    scanf("%d %d %d", &a, &d, &n);
    while(1){
        if(i == n){
            break;
        }
        a += d;
        i++;
    }
    printf("%d", a);

    return 0;
}