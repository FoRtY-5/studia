#include <stdio.h>

int main() {

    int a, b, result, i;
    printf("Enter number A:\n");
    scanf("%d", &a);
    printf("Enter number B:\n");
    scanf("%d", &b);

    result = 1;
    for(i = b; i > 0; i--) {
        result *= a;
        printf("%d\n", result);
    }

    return 0;
}
