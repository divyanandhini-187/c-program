#include<stdio.h>
int disp_single_digit_prime()
{
    int a,prime=0,digit;
    scanf("%d",&a);
    for(;a>0;a=a/10)
    {
        digit=a%10;
        if(digit== 2||digit==3||digit==5||digit==7)
        {
            prime++;
        }
    }
    return prime;
}
int main()
{
    int result=disp_single_digit_prime();
    printf("%d",result);
    return 0;
}
    