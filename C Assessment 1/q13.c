#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=a%10;
    int c=a/10;
    int rev=(b*10)+c;
    printf("%d",rev);
    return 0;
}