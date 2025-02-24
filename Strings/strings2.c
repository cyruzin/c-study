#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[10];
    char source[] = "This is a long string";

    // Vulnerable strcpy example:
    // strcpy(buffer, source); // This can cause a buffer overflow

    // Explanation: strcpy doesn't check the size of the source string
    // against the size of the destination buffer. If the source string
    // is larger than the buffer, it will write past the end of the buffer,
    // leading to a buffer overflow. This can overwrite adjacent memory,
    // potentially causing crashes or allowing malicious code execution.

    // Safer strncpy example:
    strncpy(buffer, source, sizeof(buffer) - 1);
    buffer[sizeof(buffer) - 1] = '\0'; // Ensure null termination

    // Explanation: strncpy takes a third argument, which is the maximum
    // number of characters to copy. This prevents it from writing past the
    // end of the buffer. However, it's important to note that strncpy
    // doesn't guarantee null termination if the source string is longer
    // than or equal to the specified size. Therefore, it's crucial to
    // manually null-terminate the buffer after using strncpy.

    printf("Copied string: %s\n", buffer);

    // When to use strcpy:
    // strcpy should only be used when you are absolutely certain that the
    // source string will always fit within the destination buffer. This is
    // rarely the case in real-world applications, so it's generally best
    // to avoid strcpy altogether.

    // Why strncpy is better:
    // strncpy is a safer alternative to strcpy because it allows you to
    // limit the number of characters copied, preventing buffer overflows.
    // However, it's important to remember to null-terminate the buffer
    // manually after using strncpy to ensure that it's a valid C string.

    return 0;
}