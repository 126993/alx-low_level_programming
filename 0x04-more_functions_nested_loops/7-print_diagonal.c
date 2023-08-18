#include "main.h"

/**
 * print_diagonal - Draws diagonal line on the terminal.
 * @n: The number of times the character \ should be printed.
 * Return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
		putchar('\n');
	else
	{
		int i, k;

		for (i = 0 ; i < n ; i++)
		{
			for (k = 0 ; k <= i ; k++)
				putchar(' ');
			putchar('\\');
			putchar('\n');
		}
	}
}
