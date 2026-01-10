#include<stdio.h>
void disp_single_digit_square()
{
    int a,sqr=0,digit;
    scanf("%d",&a);
    for(;a>0;a=a/10)
    {
        digit=a%10;
        if(digit==0||digit==1||digit==4||digit==9)
        {
            sqr++;
        }     
    }
    printf("%d",sqr);
}
int main()
{
    disp_single_digit_square();
    return 0;
}