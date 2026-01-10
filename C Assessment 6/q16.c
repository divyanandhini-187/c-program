#include<stdio.h>
int main()
{
    int a,flag=1;
    scanf("%d",&a);
    if(a<=1)
    {
        flag=0;
    }
    else
    {
        int i=2;
        while(i<=a/2)
        {
            if(a%i==0)
            {
                flag=0;
                break;
            }
            i++;
        }
    }
    if(flag==1)
    {
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    return 0;
}