#include<stdio.h>
void disp_2digit_odd_sum_tens7()
{
    int sum=0;
    for(int i=11;i<=99;i++)
    {
        int b=i/10;
        if((b==7)&&(i%2!=0))
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}
int main()
{
    disp_2digit_odd_sum_tens7();
    return 0;
}