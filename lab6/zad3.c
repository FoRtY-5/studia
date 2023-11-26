#include <stdio.h>
#include <stdlib.h>

void calc(int n) {
    printf("%d\n", n);
    if (n > 1) { calc(n-1); }
    
}


int main(int argc, char* argv[]){

    int n;
    char *ac;
    ac = argv[1];

    n = atoi(ac);
    
    calc(n);

    return 0;
}
