#include <stdio.h>

int main()
{
    char str[100];
    char *p;
    int count = 0;

    gets(str);     
    p = str;   

    while (*p != '\0')
    {
        if (*p == ' ')
            count++;
        p++;
    }

    printf("%d", count + 1);

    return 0;
}
