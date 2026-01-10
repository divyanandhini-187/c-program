#include<stdio.h>
int main()
{
    int i=11;
    while(i<=99)
    {
        if(i%2==0){
        int b=i/10;
        int c=i%10;
        if((b+c)==6){
            printf("%d\n",i);
        }
    }
    i++;
    }
    return 0;

}