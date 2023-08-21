#include "main.h"

/**
 * Prints a string followed by a new line to stdout.
 * 
 * @param str The string to be printed.
 */
void custom_puts(const char *str)
{
    while (*str != '\0')
    {
        _putchar(*str++);
    }
    _putchar('\n');
}

