#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - Prints the second half of a string
 *
 * @str: The input string
 *
 * Return: None
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int half_length = (length + 1) / 2;
	int i;

	for (i = half_length; i < length; i++)
		putchar(str[i]);

	putchar('\n');
}
