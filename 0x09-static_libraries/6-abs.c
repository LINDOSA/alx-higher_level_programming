#include "main.h"

/**
 * Computes the absolute value of an integer.
 * 
 * @param n The integer to compute the absolute value of.
 * @return The absolute value of the integer.
 */
int custom_abs(int n)
{
    if (n >= 0)
    {
        return n;
    }
    return -n;
}

