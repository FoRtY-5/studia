#include <stdio.h>
#include <unistd.h>


// use for command line arguments
int main(int argc, char* argv[]){

    int input[argc - 1];

    for (int i = 1; i < argc; i++) {
        char *ac = argv[i];    
        int n = atoi(ac);
        input[i - 1] = n;    
    }

    for (int i = 0; i < argc; i++)
    {
        printf("%d arg: %d \n", i, input[i]);
    }
    

}