#include<stdio.h>
int disp_single_digit_square()
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
    return sqr;
}
int main()
{
    int result=disp_single_digit_square();
    printf("%d",result);
    return 0;
}