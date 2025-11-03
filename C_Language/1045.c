#include <stdio.h>
int main() {
    int n, n1;
    scanf("%d %d", &n, &n1);
    printf("%d\n%d\n%d\n%d\n%d\n%.2f", n+n1, n-n1, n*n1, n/n1, n%n1, (float)n/n1);
    return 0;
}