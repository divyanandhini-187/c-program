#include<stdio.h>
int main()
{
    int a=1,count=0;
    while(a<100000)
    {
        int n=a;
        int sum=0;
        while(n>0)
        {
            sum=sum+(n%10);
            n=n/10;
        }
        if(sum==14)
        {
            count++;
        }
        a++;
    }
    printf("%d",count);
    return 0;

}