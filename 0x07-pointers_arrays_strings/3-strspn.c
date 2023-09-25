#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: A pointer to the string to search.
 * @accept: A pointer to the set of characters to accept.
 *
 * Return: The number of bytes in the initial segment of @s, which consist only
 *         of bytes from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int match;

	while (*s)
	{
	match = 0;
	while (*accept)
	{
	if (*s == *accept)
	{
	len++;
	match = 1;
	break;
	}
	accept++;
	}

	if (!match)
	{
	break;
	}

	s++;
	}

	return (len);
}
