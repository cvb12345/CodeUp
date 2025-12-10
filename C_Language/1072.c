#include <stdio.h>
int main(){
    int s, n;
    scanf("%d", &s);
Lable:
    scanf("%d", &n);
    printf("%d\n", n);
    if(s-- > 1){
        goto Lable;
    }

    return 0;
}