#include "main.h"
#include <unistd.h>

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: Pointer to a string
 */
void _puts(char *str)
{
	if (str != NULL)
	{
	while (*str != '\0')
	{
	write(1, str, 1);
	str++;
	}
	write(1, "\n", 1);
	}
}
