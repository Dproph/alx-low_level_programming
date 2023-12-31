#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: A pointer to the string to search.
 * @accept: A pointer to the set of characters to search for.
 *
 * Return: A pointer to the byte in @s that matches one of the bytes
 *         or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
	char *a = accept;

	while (*a)
	{
	if (*s == *a)
	{
	return (s);
	}
	a++;
	}
	s++;
	}

	return (NULL);
}
