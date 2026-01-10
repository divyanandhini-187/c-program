#include<stdio.h>
void check_prime_and_sum14()
{
    int a,flag=1;
    scanf("%d",&a);
    if(a<=1)
    {
        flag=0;
    }
    else{
        for(int i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                flag=0;
                break;
            }
        }
    }
    int b=a%10;
    int c=a/10;
    if((b+c)==14 && flag==1)
    {
        printf("Prime & sum of digits is 14");
    } 
    else if((b+c)==14&&flag==0)
    {
        printf("Not Prime & sum of digits is 14");
    }
    else if((b+c)!=14&&flag==1)
    {
        printf("Prime & sum of digits is not 14");
    }
    else if((b+c)!=14&&flag==0)
    {
        printf("Not Prime & sum of digits is not 14");
    }
}
int main()
{
    check_prime_and_sum14();
    return 0;
}
