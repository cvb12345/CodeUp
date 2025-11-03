#include <stdio.h>
int main() {
    int n, n1, n2;
    scanf("%d %d %d", &n, &n1, &n2);
    printf("%d\n%.1f", n+n1+n2, (float)(n+n1+n2)/3);
    return 0;
}