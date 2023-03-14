#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to new string containing concatenated arguments
 * or NULL if failure occurs
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, pos = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* calculate total length of all arguments */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
		len++; /* account for space after argument */
	}
	len++; /* account for terminating null byte */

	/* allocate memory for concatenated string */
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	/* concatenate all arguments */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[pos] = av[i][j];
			pos++;
		}
		str[pos] = '\n';
		pos++;
	}
	str[pos] = '\0';

	return (str);
}
