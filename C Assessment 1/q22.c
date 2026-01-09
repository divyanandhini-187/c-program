#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=(a/10)%10;
    int n=a-(b%2)*5;
    printf("%d",n);
    return 0;
}