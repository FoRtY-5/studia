#include <stdio.h>
#include <stdbool.h>

bool checkDay(int day) {
    return (1 <= day) && (day <= 31);
}
bool checkMonth(int month) {
    return (1 <= month) && (month <= 12);
}
bool checkYear(int year) {
    return (1 <= year);
}

bool checkAll() {
    int day, month, year;
    printf("Day: ");
    scanf("%d", &day);
    printf("Month: ");
    scanf("%d", &month);
    printf("Year: ");
    scanf("%d", &year);
    return checkDay(day) && checkMonth(month) && checkYear(year);
}

int main() {

    printf("%d", checkAll());

}
