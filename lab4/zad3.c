#include <stdio.h>

int main() {

    int a, b, c, result;
    printf("Enter number A:\n");
    scanf("%d", &a);
    printf("Enter number B:\n");
    scanf("%d", &b);

    result = 1;
    c = 0;
    while (result <= b) {
        result *= a;
        printf("%d\n", c);
        c++;
    }
    printf("Final result: %d\n", c);
    return 0;
}
