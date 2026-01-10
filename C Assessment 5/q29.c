#include<stdio.h>
int main()
{
    int a,b,c,gcd=1,lcm1,lcm,gcd2=1;
    scanf("%d %d %d",&a,&b,&c);
    for(int i=2;i<=a && i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            gcd=i;
        }
    }
    lcm1=(a*b)/gcd;
    for(int i=1;i<=lcm1 && i<=c;i++)
    {
        if(lcm1%i==0&& c%i==0)
        {
            gcd2=i;
        }
    }
    lcm=(lcm1*c)/gcd2;
    printf("%d",lcm);
    return 0;

}