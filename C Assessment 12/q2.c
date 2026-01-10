#include <stdio.h>

int main()
{
    char str[100], ch;
    char *p;
    int i = 1;

    scanf("%s", str);
    scanf(" %c", &ch);

    p = str;

    while (*p != '\0')
    {
        if (*p == ch)
            printf("%d ", i);
        p++;
        i++;
    }
    return 0;
}
