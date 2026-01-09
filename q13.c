#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int c=(a/10)%10;
    int d=a%10;
    if(c==d)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}