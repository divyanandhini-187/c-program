#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=a/100;
    int c=a%100;
    printf("%d",b==c);
    return 0;
}