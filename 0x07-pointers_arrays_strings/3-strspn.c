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

	while (*s)
	{
	int is_accepted = 0;
	char *a = accept;

	while (*a)
	{
	if (*s == *a)
	{
	is_accepted = 1;
	break;
	}
	a++;
	}

	if (!is_accepted)
	{
	break;
	}

	len++;
	s++;
	}

	return (len);
}
