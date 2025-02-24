#include <stdio.h>
#include <string.h>

int main() {
    char greeting[20] = "Hello";
    char name[] = " Alice";
    char combined[50];

    // Copy greeting to combined
    strcpy(combined, greeting);

    // Concatenate name to combined
    strcat(combined, name);

    printf("Combined string: %s\n", combined);

    // Find the length of the combined string
    size_t length = strlen(combined);
    printf("Length of the combined string: %zu\n", length);

    char str3[20];
    strncpy(str3, "This is a long string", sizeof(str3) - 1);
    str3[sizeof(str3) - 1] = '\0'; // Ensure null termination
    printf("Copied string: %s\n", str3);

    return 0;
}