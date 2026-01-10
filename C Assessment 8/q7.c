#include <stdio.h>

int disp_reverse_number()
{
    int num, rev = 0;

    scanf("%d", &num);

    for(; num > 0; num = num / 10)
    {
        rev = rev * 10 + (num % 10);
    }
    return rev;
}
int main()
{
    int result=disp_reverse_number();
    printf("%d",result);
    return 0;
}
