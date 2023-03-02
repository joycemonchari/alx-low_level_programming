#include <stdio.h>

/**
 * _strncpy - copies up to n characters from the string pointed to by src,
 * including the terminating null byte, to the buffer pointed to by dest.
 * @dest: pointer to the destination string.
 * @src: pointer to the source string.
 * @n: maximum number of characters to be copied.
 *
 * Return: a pointer to the destination string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i++] = '\0';
	}

	return (dest);

}
