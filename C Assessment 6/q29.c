#include<stdio.h>
int main()
{
    int a,b,c,gcd1=1,gcd2=1;
    scanf("%d %d %d",&a,&b,&c);
    int i=1;
    while(i<=a && i<=b)
    {
        if(a%i==0 && b%i==0){
        gcd1=i;}
        i++;
    }
    int lcm1=(a*b)/gcd1;

    int j=1;
    while(j<=lcm1 && j<=c)
    {
        if(lcm1%j==0 && c%j==0){
        gcd2=j;}
        j++;
    }
    int lcm2=(lcm1*c)/gcd2;
    printf("%d",lcm2);
    return 0;
}