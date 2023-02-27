#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte (\0),
 *           to the buffer pointed to by dest.
 * @dest: Destination buffer
 * @src: Source string
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_start = dest;

	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = '\0';

	return (dest_start);
}
