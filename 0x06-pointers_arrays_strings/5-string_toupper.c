#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 *
 * @str: Pointer to string
 *
 * Return: Pointer to modified string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32; /* ASCII difference between uppercase and lowercase */

		i++;
	}
	return (str);
}
