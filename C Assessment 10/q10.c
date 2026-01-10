#include <stdio.h>
#include <string.h>

int main() {
    char number[51];
    int len;

    scanf("%50s", number);

    len = strlen(number);

    for(int i = len - 1; i >= 0; i--) {
        printf("%c", number[i]);
    }
    printf("\n");

    return 0;
}
