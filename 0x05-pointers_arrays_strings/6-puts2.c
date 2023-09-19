#include "main.h"
#include <unistd.h>

/**
 * puts2 - Prints every other character of a string followed by a new line
 * @str: Pointer to a string
 */
void puts2(char *str)
{
	if (str != NULL)
	{
	int i = 0;

	while (str[i] != '\0')
	{
	write(1, &str[i], 1);
	i += 2;
	}

	write(1, "\n", 1);
	}
}
