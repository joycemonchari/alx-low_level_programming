#include "main.h"i
#include <stdio.h>
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 *
 * Return: Return: the number of bytes in the initial segment of s which has
 *only of bytes from accept, or 0 if no such bytes are found.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r])
		{
			if (*s == accept[r])
			{
			n++;
			break;
			}
		else if (accept[r + 1] == '\0')
			return (n);
		}
		s++;
	}
	return (n);
}
