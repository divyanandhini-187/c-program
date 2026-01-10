#include<stdio.h>
#include<math.h>
void disp_two_digit_square()
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
    printf("%d",square);
}
int main()
{
    disp_two_digit_square();
    return 0;
}