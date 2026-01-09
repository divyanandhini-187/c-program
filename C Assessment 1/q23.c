#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=a/10;
    int c=a%10;
    int sum=b+c;
    int n=a-(sum%2)*5;
    printf("%d",n);
    return 0;
}