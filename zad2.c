#include <stdio.h>


int add( int a, int b ) {
    return a + b;
}

int substract( int a, int b ) {
    return a - b;
}

int multiply( int a, int b ) {
    return a * b;
}

int divide( int a, int b ) {
    return a / b;
}

int modulo( int a, int b ) {
    return a % b;
}

int getInput() {
    int input;
    printf("Enter number: ");
    scanf("%d", &input);
    return input;
}

int chooseOperation(int a, int b) {
    char input;
    printf("Choose operation type:\n");
    printf("\ta. add\n");
    printf("\tb. substract\n");
    printf("\tc. multiply\n");
    printf("\td. divide\n");
    printf("\te. modulo\n");

    scanf(" %c", &input);

    switch (input) {
        case 'a':
            return add(a, b);
        case 'b':
            return substract(a, b);
        case 'c':
            return multiply(a, b);
        case 'd':
            return divide(a, b);
        case 'e':
            return modulo(a, b);

    }



}


int main() {

    int a = getInput();
    int b = getInput();

    printf("Your numbers are: a = %d, b = %d\n", a, b);

    int result = chooseOperation(a, b);
    printf("Result is: %d\n", result);

    return 0;
}
