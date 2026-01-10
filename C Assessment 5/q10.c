#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=11;i<=99;i++)
    {
        int b=i/10;
        if((b==7)&&(i%2!=0))
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}