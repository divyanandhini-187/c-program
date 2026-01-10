#include<stdio.h>
void disp_biggest_4digit_div7_9()
{
    int i,temp=0;
    for(i=1000;i<=9999;i++)
    {
        if(i%7==0&&i%9==0)
        {
            temp=i;
        }
    }
    printf("%d",temp);
}
int main()
{
    disp_biggest_4digit_div7_9();
    return 0;
}