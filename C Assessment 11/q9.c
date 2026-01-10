#include <stdio.h>

void intcon(int *src1, int size1, int *src2, int size2, int *dst)
{
    int i;

    for(i = 0; i < size1; i++)
        *(dst + i) = *(src1 + i);

    for(i = 0; i < size2; i++)
        *(dst + size1 + i) = *(src2 + i);
}

int main()
{
    int a[3] = {1, 2, 3};
    int b[2] = {4, 5};
    int c[5];

    intcon(a, 3, b, 2, c);

    for(int i = 0; i < 5; i++)
        printf("%d ", c[i]);

    return 0;
}
