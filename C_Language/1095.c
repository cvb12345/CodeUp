#include <stdio.h>
int main(){
    int n, tmp;
    int arr[10000] = {0};
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    tmp = arr[0];
    for(int i = 1; i < n; i++){
        if(tmp > arr[i]){
            tmp = arr[i];
        }else{
            continue;
        }
    }
    printf("%d", tmp);

    return 0;
}