#include<stdio.h>
#include<math.h>
int disp_two_digit_square()
{
    int a,b,square=0,digit;
    scanf("%d",&a);
    for(;a>=10;a=a/10)
    {
        digit=a%100;
        b=sqrt(digit);  
        if(b*b==digit)
        {
            square++;
        }   
    }
    return square;
}
int main()
{
    int result = disp_two_digit_square();
    printf("%d",result);
    return 0;
}