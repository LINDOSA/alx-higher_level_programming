#include "main.h"

/**
 * Locates the first occurrence of a substring in a string.
 * 
 * @param haystack Pointer to the string where the search will be performed.
 * @param needle Pointer to the substring to be located.
 * @return Pointer to the first occurrence of the substring in the string,
 *         or NULL if the substring is not found.
 */
char *custom_strstr(const char *haystack, const char *needle)
{
    for (; *haystack != '\0'; haystack++)
    {
        const char *h = haystack;
        const char *n = needle;

        while (*h == *n && *n != '\0')
        {
            h++;
            n++;
        }

        if (*n == '\0')
            return (char *)haystack;
    }

    return NULL;
}

