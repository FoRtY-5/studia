#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int calcImpl(int n, int c, int a, int b) {
    int result;
    if (c == 0) { result = 0; }
    else if (c == 1) { result = 1; }
    else {
        result = a + b;
        a = b;
        b = result;
    }
    
    printf("N: %d\n", n);
    printf("C: %d\n", c);
    printf("Result: %d\n", result);

    if (n == 0) { return a; }
    else if (n == 1) { return b; }
    else if (n > c) { result = calcImpl(n, ++c, a, b); }
    
    return result;
}

int calc(int n) {
    return calcImpl(n, 0, 0, 1);
}

int main(int argc, char* argv[]){

    char *ac = argv[1];
    int n = atoi(ac);
    
    calc(n);

    return 0;
}
