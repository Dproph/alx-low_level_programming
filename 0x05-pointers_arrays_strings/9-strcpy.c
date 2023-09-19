#include "main.h"
#include <stddef.h>

/**
 * _strcpy - Copies a string including the null byte to a destination buffer
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 * Return: Pointer to the destination buffer (dest)
 */
char *_strcpy(char *dest, const char *src)
{
	char *dest_start = dest;

	if (dest != NULL && src != NULL)
	{
	while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}

	*dest = '\0';
	}

	return (dest_start);
}
