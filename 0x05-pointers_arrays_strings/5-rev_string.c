#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char tmp;

	/* Find the end of the string */
	while (s[j + 1] != '\0')
	{
		j++;
	}

	/* Reverse the string by swapping characters from both ends */
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}
