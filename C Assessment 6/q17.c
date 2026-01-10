#include<stdio.h>
int main()
{
    int a,flag=1;
    scanf("%d",&a);
    if(a<=1)
    {
        flag=0;
    }
    else
    {
        int i=2;
        while(i<=a/2)
        {
            if(a%i==0)
            {
                flag=0;
                break;
            }
            i++;
        }
    }
    int b=a/10;
    int c=a%10;
    int sum=b+c;
    if(flag==1&&sum==14)
    {
        printf("Prime & Sum of digits is 14");
    }
    else if(flag==0&&sum==14){
        printf("Not Prime & Sum of digits is 14");
    }
    else if(flag==1&&sum!=14){
        printf("Prime & Sum of digits is not 14");
    }
    else{
        printf("Not Prime & Sum of digits is not 14");
    }

    return 0;
}