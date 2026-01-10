#include <stdio.h>

int main()
{
    char str[100], sub[50];
    char *p, *q;
    int i, pos;

    scanf("%s", str);
    scanf("%s", sub);

    for (i = 0; str[i] != '\0'; i++)
    {
        p = &str[i];
        q = sub;
        pos = i + 1;

        while (*p == *q && *q != '\0')
        {
            p++;
            q++;
        }
        if (*q == '\0')
        {
            printf("%d", pos);
            return 0;
        }
    }
    printf("Not found");
    return 0;
}
