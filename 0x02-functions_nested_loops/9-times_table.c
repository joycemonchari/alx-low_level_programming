#include "main.h"

/**
 * main - check the code
 * Return: Always 0
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			if (j == 0)
			{
				printf("0");
			}
			else if (result < 10)
			{
				printf("   %d", result);
			}
			else if (result >= 10)
			{
				printf("  %d", result);
			}
		}
		printf("\n");
	}
}
