#include <stdio.h>


char c_global = 'a';


void change_chars(char* change, char* c_global, char* c_local) {
    
    *c_global = *change;
    *c_local = *change;
}

int main(int argc, char* argv[]){
    
    char c_local = 'z';

    printf("c_global: %c\n", c_global);
    printf("c_local: %c\n", c_local);

    char input;
    printf("Enter a character: \n");
    scanf("%c", &input);
    change_chars(&input, &c_global, &c_local);

    printf("c_global: %c\n", c_global);
    printf("c_local: %c\n", c_local);


    return 0;
}