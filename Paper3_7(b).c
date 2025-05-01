// (b) Write a function (using pointer) that compares two integer arrays
// to see whether they are identical or not. →

#include <stdio.h>

// Function to compare two integer arrays using pointers
int areArraysIdentical(int *arr1, int *arr2, int size1, int size2) {
    // Check if sizes are different
    if (size1 != size2) {
        return 0; // Arrays are not identical
    }
    
    // Compare each element using pointers
    for (int i = 0; i < size1; i++) {
        if (*(arr1 + i) != *(arr2 + i)) {
            return 0; // Arrays are not identical
        }
    }
    
    return 1; // Arrays are identical
}

int main() {
    int size1, size2;

    // Input size and elements of first array
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter %d elements for first array: ", size1);
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input size and elements of second array
    printf("Enter size of second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter %d elements for second array: ", size2);
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Compare arrays using the function
    if (areArraysIdentical(arr1, arr2, size1, size2)) {
        printf("The arrays are identical.\n");
    } else {
        printf("The arrays are not identical.\n");
    }

    return 0;
}