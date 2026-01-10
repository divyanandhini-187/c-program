#include<stdio.h>

int main()
{
    int i = 70, sum = 0;

start:
    if(i / 10 == 7)          // ten’s digit is 7
    {
        if(i % 2 != 0)       // odd number
        {
            sum = sum + i;
        }
    }

    i++;

    if(i <= 79)
    {
        goto start;
    }

    printf("%d", sum);

    return 0;
}
