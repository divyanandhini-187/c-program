#include <stdio.h>
#include <string.h>
void getnumbers(char *n1, char *n2)
{
    scanf("%s %s", n1, n2);
}
void addnumbers(char *n1, char *n2, char *res)
{
    int i = strlen(n1) - 1;
    int j = strlen(n2) - 1;
    int k = 0, carry = 0, sum;
    while(i >= 0 || j >= 0 || carry)
    {
        sum = carry;
        if(i >= 0) sum += *(n1 + i--) - '0';
        if(j >= 0) sum += *(n2 + j--) - '0';

        *(res + k++) = (sum % 10) + '0';
        carry = sum / 10;
    }
    *(res + k) = '\0';

    for(i = 0, j = k - 1; i < j; i++, j--)
    {
        char t = *(res + i);
        *(res + i) = *(res + j);
        *(res + j) = t;
    }
}
int main()
{
    char number1[51], number2[51], result[52];
    getnumbers(number1, number2);
    addnumbers(number1, number2, result);
    printf("%s", result);
    return 0;
}
