#include <stdio.h>
int main() {
    int n, *p = &n;
    scanf("%d", p);
    printf("%d\n%d\n", *p, ++*p);
    return 0;
}
