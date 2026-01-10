#include<stdio.h>
int main()
{
    int a,flag=1;
    scanf("%d",&a);
    if(a<=1)
    {
        flag=0;
    }
    else{
        for(int i=2;i<=a/2;i++)
        {
            if(a%i==0)
            {
                flag=0;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }
    return 0;    
}
