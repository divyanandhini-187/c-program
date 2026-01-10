#include<stdio.h>
int main()
{
    int a,digit=0,pow=1,first,last,temp;
    scanf("%d",&a);
    last=a%10;
    int num=a;
    if((last%2)!=0)
    {
        count:
        {
            if(num!=0){
                digit++;
                num=num/10;
                goto count;
            }
            
        }
        power:
        {
            if(digit>1){
                pow=pow*10;
                digit--;
                goto power;
            }
        }
        first=a/pow;

        num=a%pow;
        num=num/10;
        temp=((first-1)*pow)+(num*10)+last;
        printf("%d",temp);
    }
    else{
        printf("%d",a);
    }
    
    return 0;

}