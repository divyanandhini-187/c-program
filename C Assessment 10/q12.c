#include<stdio.h>
int main()
{
    int numArray[50]={1,2,3,4,5,6,7,8,9};
    int n=10;

    char str[51];
    for(int i=0;i<n;i++)
    {
        str[i]=numArray[i]+'0';
    }
    str[n]='\0';
    printf("%s\n",str);
    return 0;
}