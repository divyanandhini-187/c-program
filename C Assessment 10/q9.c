#include <stdio.h>
#include <string.h>

int main()
{
    char number[51];
    int i = 0;

    printf("Enter the number: ");
    scanf("%50s", number); 
    while (number[i] == '0') {
        i++;
    }

    if (i == strlen(number)) {
        printf("0\n");
    } 
    else {
        printf("%s\n", number + i); 
    }

    return 0;
}

