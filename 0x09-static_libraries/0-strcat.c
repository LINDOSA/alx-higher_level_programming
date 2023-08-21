#include "main.h"

/**
 * Concatenates two strings.
 * 
 * @param dest The destination string where src will be concatenated.
 * @param src The source string to be concatenated onto dest.
 * @return Pointer to the modified destination string.
 */
char *custom_strcat(char *dest, char *src)
{
    int dest_length = 0;
    int i = 0;
    
    // Find the length of the destination string
    while (dest[dest_length] != '\0')
    {
        dest_length++;
    }

    // Copy characters from src to the end of dest
    while (src[i] != '\0')
    {
        dest[dest_length + i] = src[i];
        i++;
    }

    dest[dest_length + i] = '\0'; // Null-terminate the concatenated string
    return dest;
}

