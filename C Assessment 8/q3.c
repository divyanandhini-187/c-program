#include<stdio.h>
int disp_2digit_ones5()
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
    return sum;
}
int main()
{
    int result= disp_2digit_ones5();
    printf("%d",result);
    return 0;
}