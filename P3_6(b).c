#include <stdio.h>

// Function to copy source string to destination
void myStrCopy(char *dest, char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0'; // Add null terminator
}

// Function to compare two strings lexicographically
int myStrCompare(char *str1, char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return *str1 - *str2; // Return difference if characters differ
        }
        str1++;
        str2++;
    }
    // If one string ends before the other
    return *str1 - *str2;
}

int main() {
    char str1[100], str2[100], copiedStr[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline

    // Copy str1 to copiedStr
    myStrCopy(copiedStr, str1);
    printf("Copied string: %s\n", copiedStr);

    // Compare str1 and str2
    int result = myStrCompare(str1, str2);
    if (result == 0) {
        printf("Strings are equal\n");
    } else if (result < 0) {
        printf("First string is lexicographically smaller\n");
    } else {
        printf("First string is lexicographically larger\n");
    }

    return 0;
}