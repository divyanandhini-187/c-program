#include<stdio.h>
int main()
{
    int i,temp=0;
    for(i=1000;i<=9999;i++)
    {
        if(i%7==0&&i%9==0)
        {
            temp=i;
        }
    }
    printf("%d",temp);
    return 0;
}