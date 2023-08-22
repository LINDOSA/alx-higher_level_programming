#include "main.h"

/**
 * Checks if a character is an alphabetic letter.
 * 
 * @param c The character to be checked.
 * @return Returns 1 if c is an alphabetic letter, otherwise 0.
 */
int is_alphabetic(int c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

