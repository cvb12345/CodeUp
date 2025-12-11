#include <stdio.h>
int main(){
    int n, s;
    int arr[24] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &s);
        arr[s]++;
    }
    for(int i = 1; i <= 23; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}