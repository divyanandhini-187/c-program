#include<stdio.h>
void disp_sum_all_digits()
{
    int i,sum=0;
    scanf("%d",&i);
    for(;i>0;i=i/10)
    {
        int b=i%10;
        sum=sum+b;
    }
    printf("%d",sum);
}
int main()
{
    disp_sum_all_digits();
    return 0;
}