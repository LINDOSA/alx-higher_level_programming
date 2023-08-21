#include "main.h"

/**
 * Compares two strings lexicographically.
 * 
 * @param s1 The first string to be compared.
 * @param s2 The second string to be compared.
 * @return Returns a negative value if s1 is less than s2,
 *         a positive value if s1 is greater than s2,
 *         and 0 if they are equal.
 */
int custom_strcmp(const char *s1, const char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    
    return (s1[i] - s2[i]);
}

