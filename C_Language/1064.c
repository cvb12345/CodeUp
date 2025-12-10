#include <stdio.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", (a < b ? a : b) < c ? (a > b ? b : a) : (b > c ? c : b));

    return 0;
}