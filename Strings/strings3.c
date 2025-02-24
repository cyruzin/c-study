#include <stdio.h>
#include <string.h>

int main()
{
    char dest[20] = "Hello, ";
    char src[] = "world!";
    char long_src[] = "This is a very long string that will definitely overflow the destination buffer.";

    // Risky strcat example:
    // char overflow_test[10] = "test"; // A variable declared after dest
    // strcat(dest, long_src); // This will cause a buffer overflow
    // printf("Concatenated string: %s\n", dest); // This might crash or print garbage
    // printf("Overflow test: %s\n", overflow_test); // This will be overwritten

    // Explanation: strcat appends src to dest without checking if there's enough space in dest.
    // If the combined length of dest and src exceeds the size of dest, it will write past the end of the buffer,
    // leading to a buffer overflow.

    // Safer strncat example:
    char safe_dest[20] = "Hello, ";
    strncat(safe_dest, long_src, sizeof(safe_dest) - strlen(safe_dest) - 1);
    safe_dest[sizeof(safe_dest) - 1] = '\0'; // Ensure null termination
    printf("Safely concatenated string: %s\n", safe_dest);

    // Explanation: strncat takes a third argument, which is the maximum number of characters to append.
    // This prevents it from writing past the end of the buffer.
    // We calculate the maximum number of characters to copy by subtracting the current length of dest from the total size of dest, and then subtracting 1 for the null terminator.
    // It's crucial to manually null-terminate the buffer after using strncat to ensure that it's a valid C string.

    // Even safer snprintf example:
    char snprintf_dest[20] = "Hello, ";
    int snprintf_result = snprintf(snprintf_dest, sizeof(snprintf_dest), "%s%s", snprintf_dest, long_src);
    if (snprintf_result >= sizeof(snprintf_dest))
    {
        printf("snprintf: String was truncated!\n");
    }
    printf("snprintf concatenated string: %s\n", snprintf_dest);

    // When to use strcat:
    // strcat should only be used when you are absolutely certain that the combined length of the strings
    // will always fit within the destination buffer. This is rarely the case in real-world applications,
    // so it's generally best to avoid strcat altogether.

    // Why strncat is better:
    // strncat is a safer alternative to strcat because it allows you to limit the number of characters appended,
    // preventing buffer overflows. However, it's important to remember to null-terminate the buffer
    // manually after using strncat to ensure that it's a valid C string.

    return 0;
}