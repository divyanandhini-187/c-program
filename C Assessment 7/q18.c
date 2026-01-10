#include<stdio.h>
void check_first_2digits_prime()
{
    int a,flag=1;
    scanf("%d",&a);
    int last=a%100;
    if(last<=1)
    {
        flag=0;
    }
    else{
    for(int i=2;i<=last/2;i++)
    {
        if(last%i==0)
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
        printf("Not Prime");
    }
}
int main()
{
    check_first_2digits_prime();
    return 0;
}