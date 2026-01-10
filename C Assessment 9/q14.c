#include<stdio.h>
int main()
{
    int a[100];
    int count=0,num;
    while(1)
    {
        scanf("%d",&num);
        if(num==0)
        {
            break;
        }
        a[count]=num;
        count++;
    }
    if(count%2!=0)
    {
        printf("%d\n",a[count/2]);
    }
    else{
        float avg;
        avg=(a[(count/2)]-1+a[count/2])/2.0;
        printf("%.1f\n",avg);

    }
    return 0;
}