#include <stdio.h>
#include <stdlib.h>

int calc(int a, int b) {

    printf("A: %d\n", a);
    printf("B: %d\n", b);
    printf("-----------\n");

    if (b == 0) {
        return a;
    } else if (a < b) {
        return calc(b, a);
    } else {
        return calc(a-b, b);
    }
}


int main(int argc, char* argv[]){

    int a, b;
    char *ac, *bc;
    ac = argv[1];
    bc = argv[2];

    a = atoi(ac);
    b = atoi(bc);
    
    calc(a, b);

    return 0;
}
