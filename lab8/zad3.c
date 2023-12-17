#include <stdio.h>
#include <unistd.h>
#include <math.h>
#include <stdlib.h> 

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
    
    int arr[n];
    for (int i = 0; i <= n; i++) {
        arr[i] = rand() % 100;
    }
    
    int i = 0;
    while (i <= n) {
        int element = arr[i];
        int k = i - 1;

        while ((k >= 0) && (arr[k] > element)) {
            arr[k + 1] = arr[k];
            k = k - 1;
        }
        arr[k + 1] = element;
        i += 1;
    }
    
    for (int i = 0; i <= n; i++) {
        printf("index: %d, value: %d\n", i, arr[i]);
    }
    

}