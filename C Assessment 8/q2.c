#include<stdio.h>
int disp_rsum()
{
    int sum=0;
    for(int i=6;i>=1;i--)
    {
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int result=disp_rsum();
    printf("%d",result);
    return 0;
}