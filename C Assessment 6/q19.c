#include<stdio.h>
int main()
{
    int a,flag=1;
    scanf("%d",&a);
    int mid=(a%1000)/10;
    if(mid<=1)
    {
        flag=0;
    }
    else{
        int i=2;
        while(i<=mid/2)
        {
            if(mid%i==0)
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