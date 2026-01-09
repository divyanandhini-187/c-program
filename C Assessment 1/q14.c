#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=a/100;
    int c=a%10;
    int d=(a/10)%10;
    int rev=(c*100)+(d*10)+b;
    printf("%d",rev);
    return 0;
}