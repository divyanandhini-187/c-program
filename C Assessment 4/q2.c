#include <stdio.h>
int main() {
    int x = 5;

start:
    printf("%d\n", x);
    x--;

    if (x >= 1)
        goto start;

    return 0;
}
