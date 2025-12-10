#include <stdio.h>
int main(){
    int n;
LABLE:
    scanf("%d", &n);
    printf("%d\n", n);
    if(n!=0){
        goto LABLE;
    }

}