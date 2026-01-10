#include <stdio.h>
#include <string.h>

int main() {
    char number[51];
    int digits[50];  
    int len;

    scanf("%50s", number);

    len = strlen(number);

    for(int i = 0; i < len; i++) {
        digits[i] = number[i] - '0';
    }
    
    for(int i = 0; i < len; i++) {
        printf("%d ", digits[i]);
    }
    printf("\n");

    return 0;
}
