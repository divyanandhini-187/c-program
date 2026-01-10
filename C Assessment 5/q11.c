#include<stdio.h>
int main()
{
    int i,digit=0;
    scanf("%d",&i);
    for(;i>0;i=i/10)
    {
        digit++;
    }
    printf("%d",digit);
    return 0;
}