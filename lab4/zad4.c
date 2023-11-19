#include <stdio.h>

int main() {


    int a, b, i;
    int arr[] = {2, 3, 4, 6};
    int result[sizeof(arr)];

    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Array size: %d\n", size);

    for(i = 0; i < size; i++) {
        result[i] = arr[i]*arr[i];
        printf("%d\n", result[i]);
    }

    return 0;
}
