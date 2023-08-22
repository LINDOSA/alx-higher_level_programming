#include "main.h"

/**
 * Copies the string pointed to by src to the destination string dest.
 * 
 * @param dest Pointer to the destination string where src will be copied.
 * @param src Pointer to the source string to be copied.
 * @return Pointer to the destination string.
 */
char *custom_strcpy(char *dest, const char *src)
{
    int length = 0;

    while (src[length] != '\0')
    {
        length++;
    }

    for (int i = 0; i < length; i++)
    {
        dest[i] = src[i];
    }

    dest[length] = '\0';
    return dest;
}

