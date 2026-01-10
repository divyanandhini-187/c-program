#include<stdio.h>
int main()
{
    int i=1;
    int sum=0;
    start:
    if(i<=5){
        sum=sum+i;
        i++;
        goto start;
    }
    printf("%d",sum);
    return 0;
}
