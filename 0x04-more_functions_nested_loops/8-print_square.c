#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square of a specified size
 * @size: the size of the square to print
 *
 * Return: void
 */
void print_square(int size)
{
	int row, col;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (row = 0; row < size; row++)
	{
		for (col = 0; col < size; col++)
			putchar('#');
		putchar('\n');
	}
}
