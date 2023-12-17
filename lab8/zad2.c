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
    for (int i = 0; i <= N; i++) {
        arr[i] = i;
    }


    int left = 1;
    int right = n;
    bool result = false;
    while (left <= right) {
        int middle = (floor(left + right) / 2);
        if (arr[middle] < n) {
            left = middle + 1;
        } else if (arr[middle] > n) {
            right = middle - 1;
        } else {
            result = true;
            break;
        }
        printf("Vars: middle: %d, n: %d, N: %d, %s\n", middle, n, N, result ? "true" : "false");

    }
    printf("Bool result is: %s\n", result ? "true" : "false");
    
    

}