#include <stdio.h>
int main(){
    int x, y;
    int arr[11][11] = {0};
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    x = 2, y = 2;
    while(1){
        if(arr[x][y] == 2){
            arr[x][y] = 9;
            break;
        }

        if(arr[x][y] == 0){
            arr[x][y] = 9;
        }else if(arr[x][y+1] == 0 || arr[x][y+1] == 2){
                y++;
        }else if(arr[x+1][y] == 0 || arr[x+1][y] == 2){
                x++;
        }else{
            break;
        }
    }

    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}