#include<stdio.h>
int main()
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
    if(last%2!=0){
        int temp=((first-1)*pow)+(num*10)+last;
        printf("%d",temp);
    }
    else{
        printf("%d",i);
    }
    
    return 0;
}