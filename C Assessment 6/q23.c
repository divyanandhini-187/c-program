#include<stdio.h>
#include<math.h>
int main()
{
    int a,square=0;
    scanf("%d",&a);
    while(a>0)
    {
        int b=a%10;
        int c=sqrt(b);
        if(c*c==b)
        {
            square++;
        }
        a=a/10;
    }
    printf("%d",square);
    return 0;
}