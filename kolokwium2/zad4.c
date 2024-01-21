#include <stdio.h>

void something(int arr[], int len, int index) {
    
    if(index == len) {
        return;
    }

    for (int i = index; i < len; i++)
    {
        printf("%d\n", arr[len - 1 - index]);
    }
    something(arr, len, index + 1);
}


int main(int argc, char* argv[]){
    
    something((int[]) {1, 2, 3, 4, 5, 6, 7, 8}, 8, 0);

    return 0;
}