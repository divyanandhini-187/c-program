#include <stdio.h>

void strcon(char *src1, char *src2, char *dst)
{
    while(*src1)
    {
        *dst = *src1;
        src1++;
        dst++;
    }

    while(*src2)
    {
        *dst = *src2;
        src2++;
        dst++;
    }

    *dst = '\0';
}

int main()
{
    char s1[] = "Hello ";
    char s2[] = "World";
    char result[50];

    strcon(s1, s2, result);

    printf("%s", result);

    return 0;
}
