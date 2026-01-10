#include<stdio.h>
void disp_2digit_odd_sum7()
{
    int i;
    for(i=11;i<=99;i++)
    {
        int b=i%10;
        int c=i/10;
        if((i%2)!=0)
        {
        if((b+c)==7)
        {
            printf("%d\n",i);
        }
        }
    }
}
int main()
{
    disp_2digit_odd_sum7();
    return 0;
}