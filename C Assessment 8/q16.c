#include<stdio.h>
int disp_biggest_4digit_div7_9()
{
    int i,temp=0;
    for(i=1000;i<=9999;i++)
    {
        if(i%7==0&&i%9==0)
        {
            temp=i;
        }
    }
    return temp;
}
int main()
{
    int result= disp_biggest_4digit_div7_9();
    printf("%d",result);
    return 0;
}