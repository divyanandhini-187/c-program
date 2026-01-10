#include<stdio.h>
int main()
{
    int a,i=2,flag=1;
    scanf("%d",&a);
    if(a<=1)
    {
        flag=0;
        goto result;
    }
    check:
    {
    if(i<=a/2)
    {
        if(a%i==0)
        {
            flag=0;
            goto result;
        }
        i++;
        goto check;
    }
    }
    result:
    if(flag==1)
    {
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;

    
}