#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string
 *
 * @str: Pointer to string
 *
 * Return: Pointer to modified string
 */
char *cap_string(char *str)
{
	int i;

	/* Capitalize the first letter if it's a lowercase letter */
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32; /* ASCII difference between uppercase and lowercase */

	/* Iterate over each character of the string */
	for (i = 1; str[i] != '\0'; i++)
	{
		/* If the current character is a separator */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == ',' || str[i] == ';' || str[i] == '.'
				|| str[i] == '!' || str[i] == '?' || str[i] == '"'
				|| str[i] == '(' || str[i] == ')' || str[i] == '{'
				|| str[i] == '}')
		{
			/* If the next character is a lowercase letter, capitalize it */
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] = str[i + 1] - 32;
			/* ASCII difference between uppercase and lowercase */
		}
	}
	return (str);
}
