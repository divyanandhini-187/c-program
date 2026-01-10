#include <stdio.h>

void inc(int *a, int n) {
    for(int i = 0; i < n; i++)
        a[i]++;
}

int main() {
    int a[3] = {1, 2, 3};
    inc(a, 3);

    for(int i = 0; i < 3; i++)
        printf("%d ", a[i]);

    return 0;
}
