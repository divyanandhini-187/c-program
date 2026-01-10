#include<stdio.h>
int main()
{
    int a;
    char str[20];
    int i=0;
    scanf("%d",&a);
    if(a==0)
    {
        str[i++]='0';
    }
    else{
        while(a>0){
            int digit=a%10;
            str[i++]=digit+'0';
            a=a/10;
        }
    }
    str[i]='\0';
    for(int j=0;j<i/2;j++)
    {
        char temp=str[j];
        str[j]=str[i-j-1];
        str[i-j-1]=temp;
    }
    printf("%s",str);
    return 0;
}