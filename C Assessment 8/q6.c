#include<stdio.h>
int disp_sum_all_digits()
{
    int i,sum=0;
    scanf("%d",&i);
    for(;i>0;i=i/10)
    {
        int b=i%10;
        sum=sum+b;
    }
    return sum;
}
int main()
{
    int result= disp_sum_all_digits();
    printf("%d",result);
    return 0;
}