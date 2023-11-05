#include <stdio.h>

int main() {

    int i, n, sum;

    printf("Enter number:\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += i*i;
        printf("Multiplication: %d\n", i*i);
        printf("Sum: %d\n", sum);
    }

	return 0;
}
