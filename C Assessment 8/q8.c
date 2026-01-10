#include<stdio.h>
int disp_reverse_number()
{
    int i,digit=0,pow=1;
    scanf("%d",&i);
    int num=i;
    for(;num>0;num=num/10)
    {
        digit++;
    }
    for(;digit>1;digit--)
    {
        pow=pow*10;
    }
    int first=i/pow;
    int last= i%10;
    
    num=i%pow;
    num=num/10;

    int temp=(last*pow)+(num*10)+first;
    return temp;
}
int main()
{
    int result = disp_reverse_number();
    printf("%d",result);
    return 0;
}