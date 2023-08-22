#include "main.h"

/**
 * Fills a block of memory with a specified value.
 * 
 * @param s Pointer to the starting address of memory to be filled.
 * @param b The desired value to fill the memory with.
 * @param n Number of bytes to be filled.
 * @return Pointer to the modified array with the new value for n bytes.
 */
char *custom_memset(char *s, char b, unsigned int n)
{
    for (unsigned int i = 0; i < n; i++)
    {
        s[i] = b;
    }
    
    return s;
}

