#include <unistd.h>

/**
 * _putchar - Write a character to stdout
 * @c: The character to write
 *
 * Return: On success, return the character written. On error, -1 is returned.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}

