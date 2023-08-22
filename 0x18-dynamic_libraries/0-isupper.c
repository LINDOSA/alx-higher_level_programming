#include "main.h"

/**
 * Checks if a character is an uppercase letter.
 * 
 * @param c The character to check.
 * @return Returns 1 if c is an uppercase letter, otherwise 0.
 */
int is_uppercase(int c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    else
        return 0;
}
