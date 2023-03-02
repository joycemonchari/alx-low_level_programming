#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into 1337
 *
 * @str: Pointer to string
 *
 * Return: Pointer to modified string
 */

char *leet(char *str)
{
	int i, j;
	char leet[] = "aAeEoOtTlL";
	char nums[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (str[i] == leet[j])
			{
				str[i] = nums[j];
			}
		}
	}
	return (str);
}
