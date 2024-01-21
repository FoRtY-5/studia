#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


char* input[];

// use for command line arguments
void getArgs(int argc, char* argv[]) {
    for (int i = 1; i < argc; i++) {
        char* ac = argv[i];
        input[i - 1] = ac;
    }
}

// TODO zad3
// provide path to file from command line
// e.g. `./zad2 ~/myfile.txt`
int main(int argc, char* argv[]){
    getArgs(argc, argv);

    char* path = input[0];
    if (!(access(path, F_OK) == 0)) {
        printf("File doesn't exist!\n");
        return -1;
    }

    printf("File to read: %s\n", path);

    FILE* filePointer;

    filePointer = fopen(path, "r+");
    
    fseek(filePointer, 0L, SEEK_END); 
    int size = ftell(filePointer); rewind(filePointer);
    
    char fileContent[size];    
    while (fgets(fileContent, size, filePointer))
    {
        printf("%s", fileContent);
    }

    fclose(filePointer);
    
    return 0;
}