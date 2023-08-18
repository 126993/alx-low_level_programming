#include "main.h"

/**
 * print_square - Prints a square using # character.
 * @size: The size of the square.
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
		putchar('\n');
	else
	{
		int b, c;

		for (b = 1 ; b <= size ; b++)
		{
			for (c = 1 ; c <= size ; c++)
				putchar('#');
			putchar('\n');
		}
	}
}
