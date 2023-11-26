#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int calcImpl(int n, int result) {
   if (n % 2 == 0) {  }
}

int calc(int n) {
    return calcImpl(n, 0);
}

int main(int argc, char* argv[]){

    char *ac = argv[1];
    int n = atoi(ac);
    
    calc(n);

    return 0;
}
