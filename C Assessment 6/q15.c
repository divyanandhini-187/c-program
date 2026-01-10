#include<stdio.h>
int main()
{
    int a,digit=0,pow=1;
    scanf("%d",&a);
    int num=a;
    while(num>0)
    {
        digit++;
        num=num/10;
    }
    while(digit>1)
    {
        pow=pow*10;
        digit--;
    }

    int first=a/pow;
    int last=a%10;

    num=a%pow;
    num=num/10;
    if(last%2!=0){
    int rev=((first-1)*pow)+(num*10)+last;
    printf("%d",rev);
    }
    else{
        printf("%d",a);
    }
    return 0;
}