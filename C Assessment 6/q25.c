#include<stdio.h>
int main()
{
    int a,prime=0;
    scanf("%d",&a);
    while(a>0)
    {
        int b=a%10;
        if(b==2||b==3||b==5||b==7)
        {
            prime++;
        }
        a=a/10;
    }
    printf("%d",prime);
    return 0;
}