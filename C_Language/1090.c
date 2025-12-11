#include <stdio.h>
int main(){
    long a, r, n, i=1;
    scanf("%ld %ld %ld", &a, &r, &n);
    while(1){
        if(i == n){
            break;
        }
        a *= r;
        i++;
    }
    printf("%ld", a);

    return 0;
}