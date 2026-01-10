#include<stdio.h>
int main()
{
    int a[50],b[50],sum[51];
    int n1,n2,carry=0;
    scanf("%d",&n1);
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n2);
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    int i1=n1-1;
    int i2=n2-1;
    int k=50;
    for(int i=0;i<51;i++)
    {
        sum[i]=0;
    }
    while(i1>=0||i2>=0||carry)
    {
        int s=carry;
        if(i1>=0)
        {
            s=s+a[i1--];
        }
        if(i2>=0)
        {
            s=s+b[i2--];
        }
        sum[k--]=s%10;
        carry=s/10;
    }
    int start=0;
    while(start<51 && sum[start]==0)
    {
        start++;
    }
    if(start==51)
    {
        printf("0");
    }
    else{
        for(int i=start;i<51;i++)
        {
            printf("%d",sum[i]);
        }
    }
    return 0;
}