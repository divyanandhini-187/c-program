#include<stdio.h>
int main()
{
    int a[5],b[5];
    int sum=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        int k=a[i];
        int rev=0;
        for(;k>0;k=k/10){
            int c=k%10;
            rev=rev*10+c;
        }
        b[i]=rev;
        sum=sum+b[i];
    }
    printf("%d",sum);
    return 0;
}