#include "main.h"

/**
 * Converts a string into an integer.
 * 
 * @param s The string to convert.
 * @return The integer value converted from the string.
 */
int custom_atoi(const char *s)
{
    int sign = 1, i = 0;
    unsigned int res = 0;

    while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
    {
        if (s[i] == '-')
            sign *= -1;
        i++;
    }
    
    while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
    {
        res = (res * 10) + (s[i] - '0');
        i++;
    }
    
    return (int)(res * sign);
}

