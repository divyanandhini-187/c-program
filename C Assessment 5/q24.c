#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,square=0,digit;
    scanf("%d",&a);
    for(;a>=10;a=a/10)
    {
        digit=a%100;
        b=sqrt(digit);  
        if(b*b==digit)
        {
            square++;
        }   
    }
    printf("%d",square);
    return 0;
    

}