#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    while(n>=10)
    {
        sum=0;
        while(n>0)
        {
            sum=sum+(n%10);
            n=n/10;
        }
        n=sum;
    }
    printf("%d",n);
    return 0;

}