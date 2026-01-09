#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=a/100;
    int c=(a/10)%10;
    int d=a%10;
    int num=(b*100)+(c*0)+d;
    printf("%d",num);
    return 0;
}