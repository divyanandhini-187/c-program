#include <stdio.h>

void strcopy(char *src, char *dst)
{
    while(*src != '\0')
    {
        *dst = *src;
        src++;
        dst++;
    }
    *dst = '\0';   // terminate destination string
}

int main()
{
    char src[50] = "Hello World";
    char dst[50];

    strcopy(src, dst);

    printf("%s", dst);

    return 0;
}
