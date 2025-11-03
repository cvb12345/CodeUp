#include <stdio.h>

int main() {
    int n, n1, n2, n3, n4;
    scanf("%1d%1d%1d%1d%1d", &n, &n1, &n2, &n3, &n4);
    printf("[%d]\n", n *10000);
    printf("[%d]\n", n1*1000);
    printf("[%d]\n", n2*100);
    printf("[%d]\n", n3*10);
    printf("[%d]", n4);
    return 0;
}