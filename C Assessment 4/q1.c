#include <stdio.h>
int main() {
    int x = 1;

start:
    printf("%d\n", x);
    x++;

    if (x <= 5)
        goto start;

    return 0;
}
