// (4) Discuss dynamic memory allocation with suitable example

#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, *arr;
    printf("Enter array size: ");
    scanf("%d", &n);
    arr = (int*)malloc(n * sizeof(int)); // Allocate memory
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1; // Assign values
    }
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr); // Deallocate memory
    return 0;
}