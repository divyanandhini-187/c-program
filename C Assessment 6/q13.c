#include<stdio.h>
int main()
{
    int a,b,rev=0;
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        rev=rev*10+b;
        a=a/10;
    }
    printf("%d",rev);
    return 0;
}