#include <stdio.h>


int multiply(int a, int b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int menu(int a, int b) {
    char expr;

    printf("\t1. Multiply\n");
    printf("\t2. Divide\n");
    printf("\t3. Add\n");
    printf("\t4. Subtract\n ");

    scanf(" %c", &expr);

    int result;

    switch(expr) {
        case '1':
            return multiply(a, b);
            break;
        case '2':
            return divide(a, b);
            break;
        case '3':
            return add(a, b);
            break;
        case '4':
            return subtract(a, b);
            break;
        default:
            printf("Select correct action!\n");
            menu(a, b);
    }
    return -1;
}

int main() {

    int a, b;

    printf("Number A: ");
    scanf("%d", &a);
    printf("Number B: ");
    scanf("%d", &b);
    printf("Result: %d\n", menu(a, b));


    return 0;
}
