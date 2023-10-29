#include <stdio.h>

// dd-mm-yyyy [ 12-06-2000 ]
// dd-mm-yyyy [ 20-12-2010 ]
//todo ZAD8

int subDay(int a, int b) {
    const int DAY_MAX = 30;
    int result = a - b;
    if (result < 0) {
        return DAY_MAX + result;
    } else {
        return result;
    }
}

int subMonth(int a, int b) {
    const int MONTH_MAX = 12;
    int result = a - b;
    if (result < 0) {
        return MONTH_MAX + result;
    } else {
        return result;
    }
}

int subYear(int a, int b) {
    return a - b;
}


int main() {
    int dayA, monthA, yearA, dayB, monthB, yearB;
    printf("Date 'A': \n");
    printf("\tDay: ");
    scanf("%d", &dayA);
    printf("\tMonth: ");
    scanf("%d", &monthA);
    printf("\tYear: ");
    scanf("%d", &yearA);

    printf("Date 'B': \n");
    printf("\tDay: ");
    scanf("%d", &dayB);
    printf("\tMonth: ");
    scanf("%d", &monthB);
    printf("\tYear: ");
    scanf("%d", &yearB);

    printf("Difference: days: %d, months: %d, years: %d\n", subDay(dayA, dayB), subMonth(monthA, monthB), subYear(yearA, yearB));
}
