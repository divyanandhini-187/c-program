#include <stdio.h>

int main()
{
    int num;
    int digits[10];
    int i = 0;
    scanf("%d", &num);

    if (num == 0)
    {
        printf("0\n");
        return 0;
    }

    while (num > 0)
    {
        digits[i++] = num % 10;
        num = num / 10;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c\n", digits[j] + '0');
    }

    return 0;
}
