#include <stdio.h>
#include <string.h>

int main() {

    char input[80];
    int i, inputLen;

    printf("Input word: ");
    scanf("%s", input);
    inputLen = strlen(input);
    const int len = inputLen;

    for (i = 0; i < len; i++, inputLen--) {
        if (input[i] == input[inputLen - 1]) {
            printf("takie same\n");
        } else {
            printf("nie takie same\n");
            return -1;
        }
    }
    return 0;
}
