#include<stdio.h>

void disp_sum()
{
    int sum=0;
    for(int i=1;i<=5;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}
int main()
{
    disp_sum();
    return 0;
}
