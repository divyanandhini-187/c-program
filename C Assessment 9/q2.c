#include<stdio.h>
int main()
{
    int a[5],sum=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    float avg=sum/5.0;
    printf("%.2f",avg);
    return 0;
}