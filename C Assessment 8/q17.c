#include<stdio.h>
int disp_count_sum14()
{
    int n,sum,count=0;
    for(int i=1;i<=100000;i++)
    {
        n=i;
        sum=0;
        while(n>0)
        {
            sum=sum+(n%10);
            n=n/10;
        }
        if(sum==14)
        {
            count++;
        }
    }
    return count; 
}
int main()
{
    int result=disp_count_sum14();
    printf("%d",result);
    return 0;
}