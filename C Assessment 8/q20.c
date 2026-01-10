#include<stdio.h>
int disp_count_HCF2()
{
    int a,b,gcd=1;
    scanf("%d %d",&a,&b);
    for(int i=2;i<=a && i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}
int main()
{
    int result=disp_count_HCF2();
    printf("%d",result);
    return 0;
}