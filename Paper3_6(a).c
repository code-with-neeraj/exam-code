// (6) Explain size of () operator with example. →

#include <stdio.h>
int main() {
    int num = 10;
    float dec = 3.14;
    char letter = 'A';
    int arr[5] = {1, 2, 3, 4, 5};

    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of num: %zu bytes\n", sizeof(num));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of char: %zu bytes\n", sizeof(letter));
    printf("Size of array: %zu bytes\n", sizeof(arr));
    printf("Size of one array element: %zu bytes\n", sizeof(arr[0]));

    return 0;
}