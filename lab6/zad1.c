#include <stdio.h>


int calc(int n){

    int result = n;

    if (n > 1) {
        result *= calc(n - 1);
    }

    return result;
}

int getInput() {
    int input;
    printf("n!: n> ");
    scanf("%d", &input);
    return input;
}

int main() {

    int n = getInput();

    printf("%d\n", calc(n));

    return 0;
}
