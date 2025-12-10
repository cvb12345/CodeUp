#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    for(int i = 0; i<a; i++){
       if(i % 2 == 0){
            a += i;
       } 
    }
    printf("%d", a);

    return 0;
}