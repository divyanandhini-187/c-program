#include<stdio.h>
int main()
{
    int a[100],b[100];
    int count=0,num;
    while(1)
    {
        scanf("%d",&num);
        if(num==0)
        {
            break;
        }
        a[count]=num;
        count++;
    }
    for(int i=0;i<count;i++)
    {
        int n=a[i];
        int sum=0;
        while(n>0)
        {
            sum=sum+(n%10);
            n=n/10;
        }
        b[i]=sum;
    }
    for(int i=0;i<count-1;i++)
    {
        for(int j=i+1;j<count;j++)
        {
            if(b[i]>b[j])
            {
                int temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    for(int i=0;i<count;i++)
    {
        printf("%d ",b[i]);
    }
    return 0;
}