#include<stdio.h>

void disp_rsum()
{
    int sum=0;
    for(int i=6;i>=1;i--)
    {
        sum=sum+i;
    }
    printf("%d",sum);
}
int main()
{
    disp_rsum();
    return 0;
}
