#include "main.h"

/**
 * Copies a specified number of bytes from source to destination memory.
 * 
 * @param dest Pointer to the destination memory where data will be copied.
 * @param src Pointer to the source memory to be copied from.
 * @param n Number of bytes to be copied.
 * @return Pointer to the destination memory.
 */
char *custom_memcpy(char *dest, char *src, unsigned int n)
{
    for (unsigned int i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }
    
    return dest;
}

