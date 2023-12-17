#include <stdio.h>
#include <unistd.h>
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
    
    int i = n;
    while (i != 0) {
        int j = 0;
        while (j < i) {
            if (arr[j + 1] < arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            j += 1;
        }
        i -= 1;        
    }
   
    
    for (int i = 0; i <= n; i++) {
        printf("index: %d, value: %d\n", i, arr[i]);
    }
    

}