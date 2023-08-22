#include "main.h"
#include <stdio.h>

/**
 * _strlen - Calculate the length of a string.
 * @s: The string whose length is to be calculated.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
    int length = 0;
    while (s[length] != '\0')
    {
        length++;
    }
    return length;
}

int main(void)
{
    printf("%d\n", _strlen("Holberton"));
    return 0;
}

