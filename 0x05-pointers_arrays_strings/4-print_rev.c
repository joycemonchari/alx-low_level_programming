#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line
 *
 * @s: The string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	/* Find the length of the string */
	int len = strlen(s);

	/* Print each character in reverse order */
	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}

	/* Print a newline character */
	putchar('\n');
}
