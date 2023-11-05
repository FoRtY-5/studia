#include <stdio.h>

int whichIsGreater(int a, int b) {
    if (a > b) {
        return a;
    } else if (a < b) {
        return b;
    } else {
        printf("Numbers are equal\n");
    }
}

int main(){
    int a, b;
    printf("Enter number:\n");
    scanf("%d", &a);
    printf("Enter number:\n");
    scanf("%d", &b);

    int result = whichIsGreater(a, b);
    printf("result: %d\n", result);


    return 0;
}
