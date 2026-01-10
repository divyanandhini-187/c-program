#include<stdio.h>
int main()
{
    int a[5],d[5];
    int c=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        int b=a[i];
        int flag=1;
        if(b<=1)
        {
            flag=0;
        }
        else{
        for(int j=2;j<=b/2;j++)
        {
            if(b%j==0)
            {
                flag = 0;
                break;
            }
        }
    }
    if(flag==0)
    {
        d[c]=b;
        c++;
    }
    }
    for(int i=0;i<c;i++)
    {
        printf("%d ",d[i]);
    }
    return 0;
}