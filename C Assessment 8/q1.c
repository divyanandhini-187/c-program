#include<stdio.h>
int disp_sum()
{
    int sum=0;
    for(int i=1;i<=5;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int result;
    result=disp_sum();
    printf("%d",result);
    return 0;
}