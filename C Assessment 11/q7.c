#include <stdio.h>

int memcomp(int *src, int *dst, int size)
{
    for(int i = 0; i < size; i++)
    {
        if(*(src + i) != *(dst + i))
            return 0; 
    }
    return 1;  
}
int main()
{
    int a[3] = {10, 20, 30};
    int b[3] = {10, 20, 30};

    if(memcomp(a, b, 3))
        printf("Success");
    else
        printf("Failure");

    return 0;
}
