#include<stdio.h>
int main()
{
    int a,flag=1;
    scanf("%d",&a);
    int last=a%100;
    if(last<=1)
    {
        flag=0;
    }
    else{
        int i=2;
        while(i<=last/2)
        {
            if(last%i==0)
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