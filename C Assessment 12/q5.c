#include <stdio.h>
#include <string.h>

int main()
{
    char a[51], b[51];
    int res[110] = {0};
    char *p, *q;
    int i, j, la, lb;

    scanf("%s", a);
    scanf("%s", b);

    la = strlen(a);
    lb = strlen(b);

    for (i = la - 1; i >= 0; i--)
    {
        for (j = lb - 1; j >= 0; j--)
        {
            res[i + j + 1] += (a[i] - '0') * (b[j] - '0');
            res[i + j] += res[i + j + 1] / 10;
            res[i + j + 1] %= 10;
        }
    }

    i = 0;
    while (res[i] == 0)
        i++;

    for (; i < la + lb; i++)
        printf("%d", res[i]);

    return 0;
}
