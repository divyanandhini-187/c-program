#include<stdio.h>
int main()
{
    int i=11;
    start:
    {
        int b=i/10;
        int c=i%10;
        if(i%2==0)
        {
            if((b+c)==6)
            {
                printf("%d\n",i);
            }
        }
        i++;
        if(i<=99)
        {
            goto start;
        }
    }
    return 0;
}