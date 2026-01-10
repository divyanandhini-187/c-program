#include<stdio.h>
int main()
{
    int a=1000,max=0;
    while(a<=9999)
    {
        if(a%7==0&&a%9==0)
        {
            max=a;
        }
        a++;
    }
    printf("%d",max);
    return 0;

}