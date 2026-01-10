#include<stdio.h>
void count_total_digits()
{
    int i,digit=0;
    scanf("%d",&i);
    for(;i>0;i=i/10)
    {
        digit++;
    }
    printf("%d",digit);
}
int main()
{
    count_total_digits();
    return 0;
}