#include <stdio.h>

int strcomp(char *src, char *dst)
{
    while(*src && *dst)
    {
        if(*src != *dst)
            return 0;   // failure
        src++;
        dst++;
    }
    return (*src == *dst);  
}

int main()
{
    char s1[] = "hello";
    char s2[] = "hello";

    if(strcomp(s1, s2))
        printf("Success");
    else
        printf("Failure");

    return 0;
}
