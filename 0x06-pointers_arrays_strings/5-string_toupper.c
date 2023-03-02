#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @str: Pointer to string to modify
 *
 * Return: Pointer to modified string
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
			*p = *p - 32;
		p++;
	}
	return (str);
}
