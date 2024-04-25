#include <stdio.h>

int divisiveis(int arr[], int tam, int x) {
    // base case: if the array is empty, return 0
    if (tam == 0) {
        return 0;
    }
    // recursive case: if the first number is divisible by x, increment the count by 1 and continue with the rest of the array
    else if (arr[0] % x == 0) {
        return 1 + divisiveis(arr+1, tam-1, x);
    }
    // recursive case: if the first number is not divisible by x, continue with the rest of the array
    else {
        return divisiveis(arr+1, tam-1, x);
    }
}

int main() {
    int arr[] = {12, 24, 36, 48};
    int tam = sizeof(arr) / sizeof(arr[0]);
    int x = 4;
    printf("%d\n", divisiveis(arr, tam, x));  // prints 4
    return 0;
}