#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char number[51];
    int valid = 1;

    scanf("%50s", number);

    int length = strlen(number);
    if(length == 0 || length > 50) {
        valid = 0;
    } else {
        for(int i = 0; i < length; i++) {
            if(!isdigit(number[i])) {
                valid = 0;
                break;
            }
        }
    }

    if(valid) {
        printf("Valid number: %s\n", number);
    } else {
        printf("Invalid input!\n");
    }

    return 0;
}
