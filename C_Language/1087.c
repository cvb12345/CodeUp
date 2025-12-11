#include <stdio.h>
int main(){
    int a, result = 0, i = 1;
    scanf("%d", &a);
    while(1){
        if(a <= result){
            break;
        }
        result += i;
        i++;
    }
    printf("%d", result);

    return 0;
}