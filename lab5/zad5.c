#include <stdio.h>
#include <time.h>

int main() {

    int a1, b1, a2, b2;
    struct tm tm;
    char buf[255];

    memset(&tm, 0, sizeof(tm));
    strptime("2001-11-12 18:31:01", "%Y-%m-%d %H:%M:%S", &tm);
    strftime(buf, sizeof(buf), "%d %b %Y %H:%M", &tm);

    puts(buf);

    return 0;
}
