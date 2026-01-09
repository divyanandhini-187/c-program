#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=a/1000;
    int c=(a/100)%10;
    int d=(a/10)%10;
    int e=a%10;
    int num=(c*1000)+(b*100)+(d*10)+e;
    printf("%d",num);
    return 0;
}