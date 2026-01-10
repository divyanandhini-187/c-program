#include<stdio.h>
int main()
{
    int i;
    for(i=11;i<=99;i++)
    {
        int b=i%10;
        int c=i/10;
        if(i%2==0)
        {
            if((b+c)==6)
            {
                printf("%d\n",i);
            }
        }
    }
    return 0;
}