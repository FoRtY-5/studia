#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char* argv[]){
    char* path = getenv("HOME");
    strcat(path, "/plik.txt");

    printf("Directory to check: %s\n", path);

    if (access(path, F_OK) == 0) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    
    return 0;
}