#include <stdio.h>
int main(){
    int a, i = 0, result= 0;
    scanf("%d", &a);
    while(1){
        result += i;
        if(result >= a){
            printf("%d", i);
            break;
        }
        i++;
    }

    return 0;
}