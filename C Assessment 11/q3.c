#include<stdio.h>
void arrange_ascend(int *p)
{
    for(int i=0;i<5;i++)
    {
        printf("%d\n",*(p+i));
    }
}
int main()
{
    int a[5];
    int *p=a;

    for(int i=0;i<5;i++)
    {
        *(p+i)=i+1;

    }
    arrange_ascend(p);

    return 0;
}
