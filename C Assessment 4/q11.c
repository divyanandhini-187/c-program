#include<stdio.h>
int main()
{
    int a,count=0;
    scanf("%d",&a);
    if(a==0)
    {
        count=1;
        goto print;
    }
    start:
    {
        if(a!=0)
        {
            count++;
            a=a/10;
            goto start;
        }
    }
    print:
    {
        printf("%d",count);
    }
    return 0;
    
    
}