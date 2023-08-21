#include <unistd.h>

/**
 * Custom putchar function that writes a character to stdout.
 * 
 * @param c The character to be written.
 * @return On success, returns 1. On error, returns -1 and sets errno.
 */
int custom_putchar(char c)
{
    return write(1, &c, 1);
}

