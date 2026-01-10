#include<stdio.h>
int main()
{
    int a[100];
    int sum=0,count=0;
    int num;
    while(1)
    {
        scanf("%d",&num);
        if(num==0)
        {
            break;
        }
        a[count]=num;
        sum=sum+num;
        count++;
    }
    printf("Total Numbers: %d\n",count);
    printf("Sum: %d\n",sum);
    return 0;

    

}