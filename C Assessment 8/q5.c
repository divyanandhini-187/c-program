#include<stdio.h>
int count_total_digits()
{
    int i,digit=0;
    scanf("%d",&i);
    for(;i>0;i=i/10)
    {
        digit++;
    }
    return digit;
}
int main()
{
    int result=count_total_digits();
    printf("%d",result);
    return 0;
}