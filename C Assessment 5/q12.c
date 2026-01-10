#include<stdio.h>
int main()
{
    int i,sum=0;
    scanf("%d",&i);
    for(;i>0;i=i/10)
    {
        int b=i%10;
        sum=sum+b;
    }
    printf("%d",sum);
    return 0;
}