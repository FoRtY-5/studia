#include <stdio.h>
#include <stdbool.h>

bool checkDate() {
    int year;
    printf("Year: ");
    scanf("%d", &year);
    return (year % 4) == 0;
}

int main() {
    printf("Result: %d\n", checkDate());
}
