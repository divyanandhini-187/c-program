#include<stdio.h>
int main()
{
    int a,odd=0,digit;
    scanf("%d",&a);
    for(;a>0;a=a/10)
    {
        digit=a%10;
        if(digit%2!=0)
        {
            odd++;
        }
    }
    printf("%d",odd);
    return 0;
}