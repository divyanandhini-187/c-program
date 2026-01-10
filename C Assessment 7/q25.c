#include<stdio.h>
void disp_single_digit_prime()
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
    printf("%d",prime);

}
int main()
{
    disp_single_digit_prime();
    return 0;
}
    