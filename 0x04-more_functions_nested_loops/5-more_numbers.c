#include "main.h"

/**
 * more_numbers - print 0 - 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
			putchar((j / 10) + '0');
			}
		putchar((j % 10) + '0');
		}
		putchar('\n');
	}
}
