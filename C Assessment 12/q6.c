#include <stdio.h>
#include <string.h>

/* ADDITION */
void add(char *a, char *b)
{
    int i, j, c = 0;
    int la = strlen(a), lb = strlen(b);
    int r[110] = {0};

    for (i = la - 1, j = lb - 1; i >= 0 || j >= 0; i--, j--)
    {
        int x = (i >= 0) ? a[i] - '0' : 0;
        int y = (j >= 0) ? b[j] - '0' : 0;
        r[c++] = x + y;
    }

    for (i = 0; i < c; i++)
    {
        r[i + 1] += r[i] / 10;
        r[i] %= 10;
    }

    for (i = c; i >= 0; i--)
        printf("%d", r[i]);
    printf("\n");
}

/* MULTIPLICATION */
void mul(char *a, char *b)
{
    int i, j;
    int la = strlen(a), lb = strlen(b);
    int r[110] = {0};

    for (i = la - 1; i >= 0; i--)
        for (j = lb - 1; j >= 0; j--)
            r[i + j + 1] += (a[i] - '0') * (b[j] - '0');

    for (i = la + lb - 1; i > 0; i--)
    {
        r[i - 1] += r[i] / 10;
        r[i] %= 10;
    }

    for (i = 0; i < la + lb; i++)
        printf("%d", r[i]);
    printf("\n");
}

int main()
{
    char a[60], b[60], op[3];

    while (1)
    {
        printf("Calc> ");
        scanf("%s", a);

        if (strcmp(a, "Exit") == 0)
            break;

        scanf("%s %s", b, op);

        if (op[0] == '+')
            add(a, b);
        else if (op[0] == '*')
            mul(a, b);
        else
            printf("Invalid\n");
    }
    return 0;
}