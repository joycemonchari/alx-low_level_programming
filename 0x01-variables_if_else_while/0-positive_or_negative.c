#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		printf("positive\n", n);
	}
	else if (n == 0)
	{
		printf("zero\n", n);
	}
	else
	{
		printf("negative\n",n);
	}
	return (0);
}
