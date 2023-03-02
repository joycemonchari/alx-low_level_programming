#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i = 0;

	/* find the length of dest string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* append src string to dest */
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}

	/* add a terminating null byte */
	dest[dest_len + i] = '\0';

	return (dest);
}
