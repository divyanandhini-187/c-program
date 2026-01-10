#include<stdio.h>
int disp_LCM2()
{
    int a,b,gcd=1,lcm;
    scanf("%d %d",&a,&b);
    for(int i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            gcd=i;
        }
    }
    lcm=(a*b)/gcd;
    return lcm;
}
int main()
{
    int result=disp_LCM2();
    printf("%d",result);
    return 0;
}