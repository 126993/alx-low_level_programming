#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14.
 * Return: void.
 */

void more_numbers(void)
{
	int i;
	int k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (k = 0 ; k < 15 ; k++)
		{
			if (k > 9)
				putchar(k / 10 + '0');
			putchar(k % 10 + '0');
		}
		putchar('\n');
	}
}
