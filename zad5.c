#include <stdio.h>
#include <stdbool.h>

bool calc(int i) {
    return ((64 < i) && (i < 91) || (96 < i) && (i < 123));
}

bool checkASCII() {
    int num;
    printf("ASCII: ");
    scanf("%d", &num);
    return calc(num);
}

bool checkCHAR() {
    char c;
    printf("CHAR: ");
    scanf(" %c", &c);
    return calc(c);
}

bool chooseOperation() {
    char input;
    printf("Choose operation type:\n");
    printf("\ta. ASCII number\n");
    printf("\tb. Char check\n");

    scanf(" %c", &input);

    switch (input) {
        case 'a':
            return checkASCII();
        case 'b':
            return checkCHAR();
    }
}

int main() {

    bool result = chooseOperation();

    printf("%d\n", result);

    return 0;
}
