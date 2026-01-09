#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int sum;
    sum=(a/100)+((a/10)%10)+(a%10);
    printf("%d",sum);
    return 0;
}