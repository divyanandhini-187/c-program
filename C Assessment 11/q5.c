#include <stdio.h>

void memcopy(int *src, int *dst, int size)
{
    for(int i = 0; i < size; i++)
    {
        *(dst + i) = *(src + i);
    }
}

int main()
{
    int src[5] = {1, 2, 3, 4, 5};
    int dst[5];

    memcopy(src, dst, 5);

    for(int i = 0; i < 5; i++)
        printf("%d ", dst[i]);

    return 0;
}
