#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>


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
    int n = input[0];
    int N = input[1];

    int arr[N];
    bool result = false;
    for (int i = 0; i <= N; i++) {
        arr[i] = i;
    }

    for (int i = 0; i <= N; i++) {
        if (arr[i] == n) {
            result = true;
            break;
        }
    }
    
    printf("Bool value is: %s\n", result ? "true" : "false");

    
}