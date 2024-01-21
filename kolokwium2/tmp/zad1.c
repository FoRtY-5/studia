#include <stdio.h>


int main(int argc, char* argv[]){
    
    char input;


    printf("Enter a sign: \n");
    scanf("%c", &input);


    int asciiValue = input;
    printf("Input: %c\n", input);
    printf("ASCII value: %d\n", asciiValue);


    if ((48 <= asciiValue && asciiValue <= 57))
    {
        printf("You entered a number!\n");
    } else if ((65 <= asciiValue && asciiValue <= 90) ||
                (97 <= asciiValue && asciiValue <= 122))
    {
        printf("You entered a character!\n");
    } else {
        printf("You entered a different symbol!\n");
    }
    
    return 0;
}