#include<stdio.h>
int disp_total_odd_digits()
{
    int a,odd=0,digit;
    scanf("%d",&a);
    for(;a>0;a=a/10)
    {
        digit=a%10;
        if(digit%2!=0)
        {
            odd++;
        }
    }
    return odd;
}
int main()
{
    int result=disp_total_odd_digits();
    printf("%d",result);
    return 0;
}