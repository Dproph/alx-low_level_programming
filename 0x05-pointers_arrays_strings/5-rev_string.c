#include "main.h"
#include <stddef.h>
/**
 * rev_string - Reverses a string
 * @s: Pointer to a string
 */
void rev_string(char *s)
{
	if (s != NULL)
	{
	char *start = s;
	char *end = s;

	while (*end != '\0')
	{
	end++;
	}
	end--;

	while (start < end)
	{
	char temp = *start;
	*start = *end;
	*end = temp;
	start++;
	end--;
	}
	}
}
