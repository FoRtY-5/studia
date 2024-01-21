#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char* calcImpl(int n, int c) {
    char* result = "";

    if (n % 2 == 0) { result[c] = '0'; calcImpl(n/2, ++c); }
    else { result[c] = '1'; calcImpl(n/2, ++c); }

    return result;
}

char* calc(int n) {
    return calcImpl(n, 0);
}

int main(int argc, char* argv[]){

    char *ac = argv[1];
    int n = atoi(ac);
    
    calc(n);

    return 0;
}
