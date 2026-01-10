#include<stdio.h>
int main()
{
    int i=6;
    int sum=0;
    start:
    if(i>=1)
    {
        sum=sum+i;
        i--;
        goto start;
    }
    printf("%d",sum);
    return 0;
}