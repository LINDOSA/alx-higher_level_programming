#include "main.h"

/**
 * Copies a string up to a specified number of characters.
 * 
 * @param dest Pointer to the destination where the string will be copied.
 * @param src Pointer to the source string to be copied.
 * @param n Maximum number of characters to copy.
 * @return Pointer to the destination string.
 */
char *custom_strncpy(char *dest, const char *src, size_t n)
{
    size_t j = 0;

    while (j < n && src[j] != '\0')
    {
        dest[j] = src[j];
        j++;
    }
    while (j < n)
    {
        dest[j] = '\0';
        j++;
    }

    return dest;
}

