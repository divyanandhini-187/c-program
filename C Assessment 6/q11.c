#include<stdio.h>
int main()
{
    int a,digit=0;
    scanf("%d",&a);
    while(a>0)
    {
        digit++;
        a=a/10;
    }
    printf("%d",digit);
    return 0;
}