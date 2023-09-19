#include "main.h"
#include <unistd.h>

/**
 * puts_half - Prints the second half of a string followed by a new line
 * @str: Pointer to a string
 */
void puts_half(char *str)
{
	if (str != NULL)
	{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
	length++;
	}

	if (length % 2 == 0)
	{
	i = length / 2;
	}
	else
	{
	i = (length - 1) / 2;
	}

	while (str[i] != '\0')
	{
	write(1, &str[i], 1);
	i++;
	}

	write(1, "\n", 1);
	}
}
