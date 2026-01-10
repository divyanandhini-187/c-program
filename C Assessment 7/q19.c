#include<stdio.h>
void middle_2digits_prime()
{
    int a,flag=1;
    scanf("%d",&a);
    int middle=(a%1000)/10;
    if(middle<=1)
    {
        flag=0;
    }
    else{
        for(int i=2;i<=middle/2;i++)
        {
            if(middle%i==0)
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("Prime");
    }
    else{
        printf("Not prime");
    }
}
int main()
{
    middle_2digits_prime();
    return 0;
}