#include<stdio.h>
int main()
{
    int a,b,sum=0;
    scanf("%d",&a);
    if(a==0)
    {
        sum=0;
        goto print;

    }
    start:
    {
        if(a!=0)
        {
            b=a%10;
            sum=sum+b;
            a=a/10;
            goto start;
        }
    }
    print:
    {
        printf("%d",sum);
    }
    return 0;
}