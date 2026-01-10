#include<stdio.h>
int main()
{
    int a,rev=0;
    scanf("%d",&a);
    start:
    {
        if(a!=0)
        {
            int b=a%10;
            rev=rev*10+b;
            a=a/10;
            goto start;
        }
    }
    printf("%d",rev);
    
    return 0;
}