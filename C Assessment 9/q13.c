#include<stdio.h>
int main()
{
    int a[100];
    int count=0;
    int num;
    while(count<100)
    {
        scanf("%d",&num);
        if(num==0)
        {
            break;
        }
        a[count]=num;
        count++;
    }
    if(count==4&&a[0]==a[count-1])
    {
        printf("Success\n");
    }
    else{
        printf("Failure\n");
    }
    return 0;
}