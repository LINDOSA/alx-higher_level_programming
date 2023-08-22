#include "main.h"

/**
 * Searches a string for any of a set of bytes.
 * 
 * @param s Pointer to the string to be searched.
 * @param accept Pointer to the set of bytes to search for.
 * @return Pointer to the first occurrence in the string of any byte in accept,
 *         or NULL if no such byte is found.
 */
char *custom_strpbrk(char *s, const char *accept)
{
    while (*s)
    {
        for (int k = 0; accept[k]; k++)
        {
            if (*s == accept[k])
                return s;
        }
        s++;
    }

    return NULL;
}

