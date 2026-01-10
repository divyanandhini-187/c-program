#include<stdio.h>
int main()
{
    int a,odd=0;
    scanf("%d",&a);
    while(a>=10)
    {
        int b=a%100;
        if(b%2!=0)
        {
            odd++;
        }
        a=a/10;
    }
    printf("%d",odd);
    return 0;
}