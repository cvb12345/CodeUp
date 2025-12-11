#include <stdio.h>
int main(){
    int h, b, c, s;
    scanf("%d %d %d %d", &h, &b, &c, &s);
    float result = (float)h*b*c*s/8;
    printf("%.1f MB", result/1024/1024); 
    // h * b * c * s / 8 나누면 byte 값, 또 1024 byte 로 나누면 kb, 1024kb 로 또 나누면 MB가 된다.
    return 0;
}