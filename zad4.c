#include <stdio.h>

int compare(int a, int b, int c) {
    if(a > b) {
      if (a > c)  {
        return a;
      } else if (c > b) {
        return c;
      }
    } else if (b > c) {
        if (b > a) {
            return b;
        } else if (c > a) {
            return c;
        }
    } else if (c > a){
        if (c > b) {
            return c;
        } else if (b > c) {
            return b;
        }
    }

}

int main() {
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int result = compare(a, b, c);
    printf("%d\n", result);

    return 0;
}
