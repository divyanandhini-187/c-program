#include<stdio.h>
void disp_2digit_ones5()
{
    int sum=0;
    for(int i=11;i<=99;i++)
    {
        int b=i%10;
        if(b==5)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}
int main()
{
    disp_2digit_ones5();
    return 0;
}