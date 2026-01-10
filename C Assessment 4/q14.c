#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int first,last,temp,digit=0,pow=1;
    int num=a;

    count:
    {
        if(num!=0)
        {
            digit++;
            num=num/10;
            goto count;
        }
    }
    power:
    {
        if(digit>1)
        {
            pow=pow*10;
            digit--;
            goto power;
        }
    }
    first=a/pow;
    last=a%10;
    
    num=a%pow;
    num=num/10; 

    temp=(last*pow)+(num*10)+first;
    printf("%d",temp);
    return 0;

}