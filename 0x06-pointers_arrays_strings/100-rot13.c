#include "main.h"
#include <stdio.h>

/**
 * rot13 - Encodes a string using ROT13.
 * @s: The string to encode.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
	char *p = s;
	int i;

	for (i = 0; *p != '\0'; i++)
	{
		if ((*p >= 'a' && *p <= 'm') || (*p >= 'A' && *p <= 'M'))
			*p += 13;
		else if ((*p >= 'n' && *p <= 'z') || (*p >= 'N' && *p <= 'Z'))
			*p -= 13;

		p++;
	}

	return (s);
}
