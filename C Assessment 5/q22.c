#include<stdio.h>
int main()
{
    int a,digit,odd=0;
    scanf("%d",&a);
    for(;a>=10;a=a/10)
    {
        digit=a%100;
        if(digit%2!=0)
        {
            odd++;
        }
    }
    printf("%d",odd);
    return 0;
}