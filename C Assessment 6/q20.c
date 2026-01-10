#include<stdio.h>
int main()
{
    int i=2,count=0;
    while(i<=9){
        int j=2;
        int flag=1;
        while(j<=i/2)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
            j++;
        }
        if(flag)
        {
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;

}