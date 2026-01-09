#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=a/10;
    int c=a%10;
    if(b>=c)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }
    return 0;
}