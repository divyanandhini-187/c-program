#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int c=a/100;
    int d=a%100;
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