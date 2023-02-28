#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the first character of the string.
 *
 * Return: The integer value of the input string.
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');

		if (*s == '+' || (*s >= '0' && *s <= '9'))
			break;

		s++;
	}

	return (sign * num);
}
