#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int n=a-(a%2)*5;
    printf("%d",n);
    return 0;
}