#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number to calculate square root of
 *
 * Return: square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - recursive helper function to calculate square root
 *
 * @n: number to calculate square root of
 * @i: integer to test as potential square root
 *
 * Return: square root of n, or -1 if n does not have a natural square root
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}
