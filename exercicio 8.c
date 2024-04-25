#include <stdio.h>

int divisiveis(int arr[], int tam, int x, int sum) {
    // base case: if the array is empty, return the sum
    if (tam == 0) {
        return sum;
    }
    // recursive case: if the first number is divisible by x, add it to the sum and continue with the rest of the array
    else if (arr[0] % x == 0) {
        return divisiveis(arr+1, tam-1, x, sum + arr[0]);
    }
    // recursive case: if the first number is not divisible by x, continue with the rest of the array
    else {
        return divisiveis(arr+1, tam-1, x, sum);
    }
}

int main() {
    int arr[] = {12, 24, 36, 48};
    int tam = sizeof(arr) / sizeof(arr[0]);
    int x = 4;
    int sum = 0;
    printf("Sum = %d", divisiveis(arr, tam, x, sum));  // prints 120
    return 0;
}