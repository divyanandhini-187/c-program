#include<stdio.h>
void disp_2digit_even_sum6()
{
    int i,count=0;
    for(i=2;i<=9;i++)
    {
        int flag=1;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            count++;
        }
    }
    printf("%d",count);
}
int main()
{
    disp_2digit_even_sum6();
    return 0;

}