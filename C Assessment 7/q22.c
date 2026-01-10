#include<stdio.h>
void disp_total_2digit_odd()
{
    int a,digit,odd=0;
    scanf("%d",&a);
    for(;a>=10;a=a/10)
    {
        digit=a%100;
        if(digit%2!=0)
        {
            odd++;
        }
    }
    printf("%d",odd);
}
int main()
{
    disp_total_2digit_odd();
    return 0;
}