#include<stdio.h>
int main()
{
    int i=11,sum=0;
    while(i<=99)
    {
        int b=i/10;
        if(b==7&&i%2!=0)
        {
            sum=sum+i;
        }
        i++;
    }
    printf("%d",sum);
    return 0;
}
    
