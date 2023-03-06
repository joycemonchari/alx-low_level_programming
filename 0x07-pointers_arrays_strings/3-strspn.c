#include "main.h"
#include <stdio.h>
/**
 *_strspn - gets the length of a prefix substring.
 * @s: input
 * @accept: input
 *
 * return: number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match_found = 1;

	while (*s != '\0' && match_found)
	{
		match_found = 0;
		for (char *a = accept; *a != '\0'; a++)
		{
			if (*s == *a)
			{
				count++;
				match_found = 1;
				break;
			}
		}
		s++;
	}
	return (count);
}
