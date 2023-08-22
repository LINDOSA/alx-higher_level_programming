#include "main.h"
#include <stddef.h>

/**
 * Locates the first occurrence of a character in a string.
 * 
 * @param s Pointer to the string where the search will be performed.
 * @param c The character to be located.
 * @return Pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found.
 */
char *custom_strchr(char *s, char c)
{
    int i = 0;

    while (s[i] != '\0')
    {
        if (s[i] == c)
            return &s[i];
        i++;
    }
    
    return NULL;
}

