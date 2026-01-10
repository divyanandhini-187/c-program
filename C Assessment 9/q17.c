#include <stdio.h>

int main()
{
    int a[50];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] >= 10)
        {
            int carry = a[i] / 10;
            a[i] = a[i] % 10;
            a[i - 1] += carry;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
