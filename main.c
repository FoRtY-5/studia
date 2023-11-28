#include <stdio.h>
#include <unistd.h>


int input[];

void getArgs(int argc, char* argv[]) {
    for (int i = 1; i < argc; i++) {
        char* ac = argv[i];
        int n = atoi(ac);
        input[i - 1] = n;
    }
}

// use for command line arguments
int main(int argc, char* argv[]){
    getArgs(argc, argv);


//  -- use for printing --
    for (int i = 0; i < argc - 1; i++) {
        printf("%d arg: %d \n", i, input[i]);
    }
    

}